import os
import requests
import re
import shutil
import time

# --- CẤU HÌNH ---
PRACTICE_DIR = r"D:\CODING\CP\02_Practice"
# Không cần TARGET_DIR riêng, move trực tiếp trong PRACTICE_DIR

# Danh sách ưu tiên Topic
TOPIC_PRIORITY = [
    "Data_Structures",
    "Graph_Theory",
    "Dynamic_Programming",
    "String",
    "Geometry",
    "Mathematics",
    "Greedy",
    "Brute_Force",
    "Constructive",
    "Two_Pointers",
    "Binary_Search",
    "Sorting",
    "Implementation"
]

TAG_MAP = {
    "data structures": "Data_Structures",
    "dsu": "Data_Structures",
    "trees": "Graph_Theory",
    "graphs": "Graph_Theory",
    "dfs and similar": "Graph_Theory",
    "shortest paths": "Graph_Theory",
    "flows": "Graph_Theory",
    "dp": "Dynamic_Programming",
    "string suffix structures": "String",
    "strings": "String",
    "geometry": "Geometry",
    "math": "Mathematics",
    "number theory": "Mathematics",
    "combinatorics": "Mathematics",
    "probabilities": "Mathematics",
    "greedy": "Greedy",
    "brute force": "Brute_Force",
    "constructive algorithms": "Constructive",
    "two pointers": "Two_Pointers",
    "binary search": "Binary_Search",
    "sortings": "Sorting",
    "implementation": "Implementation"
}

CODE_KEYWORDS = {
    "Graph_Theory": [r"adj\[", r"vector<.*>.*adj", r"\bdfs\(", r"\bfs\(", r"\bdijkstra", r"\bkruskal", r"\btopological"],
    "Data_Structures": [r"segtree", r"fenwick", r"update\(", r"query\(", r"\bdsu\b", r"union_sets"],
    "Dynamic_Programming": [r"dp\[", r"f\[.*\]\[.*\]", r"memo\["],
    "Mathematics": [r"1e9\s*\+\s*7", r"998244353", r"binpow", r"gcd\(", r"sieve", r"prime", r"mod\s*="],
    "Binary_Search": [r"low\s*<=\s*high", r"mid\s*=", r"binary_search"],
    "Two_Pointers": [r"while\s*\(.*r\s*<\s*n\)", r"l\+\+", r"r\+\+"]
}

# --- 1. LOAD API ---
print("Dang tai du lieu Codeforces...")
try:
    cf_data = requests.get("https://codeforces.com/api/problemset.problems").json()
    problems = {}
    if cf_data["status"] == "OK":
        for p in cf_data["result"]["problems"]:
            # Key dạng: "1355A" (gộp contestId và index)
            key = f"{p.get('contestId')}{p.get('index')}" 
            problems[key] = p.get("tags", [])
    print(f"-> Load xong {len(problems)} bai.")
except:
    problems = {}

def get_code_topic(filepath):
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            for topic, patterns in CODE_KEYWORDS.items():
                for pat in patterns:
                    if re.search(pat, content, re.IGNORECASE):
                        return topic
    except: pass
    return None

def determine_topic(folder_name, folder_path):
    # Chuẩn hóa tên folder để khớp key API (VD: 1355_A -> 1355A, 1A -> 1A)
    # Loại bỏ dấu gạch dưới, khoảng trắng
    clean_name = re.sub(r"[_\s]", "", folder_name).upper()
    
    # 1. Check API
    if clean_name in problems:
        tags = problems[clean_name]
        mapped = set()
        for t in tags:
            if t in TAG_MAP: mapped.add(TAG_MAP[t])
        
        for prio in TOPIC_PRIORITY:
            if prio in mapped: return prio

    # 2. Check Code
    main_cpp = os.path.join(folder_path, "main.cpp")
    if os.path.exists(main_cpp):
        topic = get_code_topic(main_cpp)
        if topic: return topic
            
    return "Uncategorized"

# --- 2. THỰC HIỆN ---
print("Bat dau phan loai...")
count_moved = 0

for root, dirs, files in os.walk(PRACTICE_DIR):
    # Bỏ qua nếu đang ở trong folder Topic đã tạo
    if any(t in root for t in TOPIC_PRIORITY) or "Uncategorized" in root:
        continue
        
    for d in dirs:
        # Bỏ qua các folder Topic chính (để không move nhầm chính nó)
        if d in TOPIC_PRIORITY or d == "Uncategorized" or d == "Topic_Training":
            continue
            
        folder_path = os.path.join(root, d)
        
        # Chỉ xử lý thư mục bài tập (có main.cpp hoặc .cpp)
        has_code = False
        if os.path.exists(folder_path):
            try:
                for f in os.listdir(folder_path):
                    if f.endswith(".cpp"): has_code = True; break
            except: pass
            
        if has_code:
            topic = determine_topic(d, folder_path)
            
            # Tạo đường dẫn đích
            target_base = os.path.join(PRACTICE_DIR, topic)
            if topic == "Uncategorized":
                # Lấy tên OJ từ thư mục cha để phân loại Uncategorized
                parent_name = os.path.basename(root)
                # Nếu parent là 02_Practice thì thôi, còn nếu là Codeforces/AtCoder thì giữ
                if parent_name == "02_Practice": parent_name = "Misc"
                target_base = os.path.join(PRACTICE_DIR, "Uncategorized", parent_name)
            
            if not os.path.exists(target_base):
                os.makedirs(target_base)
                
            target_path = os.path.join(target_base, d)
            
            # Di chuyển
            try:
                # Nếu đích trùng nguồn (VD đã ở đúng chỗ) -> Skip
                if os.path.abspath(folder_path) == os.path.abspath(target_path):
                    continue

                # Nếu đích đã có -> Merge (Ghi đè)
                if os.path.exists(target_path):
                    for item in os.listdir(folder_path):
                        s = os.path.join(folder_path, item)
                        t = os.path.join(target_path, item)
                        if os.path.isdir(s):
                            if not os.path.exists(t): shutil.move(s, t)
                        else:
                            shutil.move(s, t)
                    shutil.rmtree(folder_path) 
                else:
                    shutil.move(folder_path, target_path)
                
                print(f"Moved: {d} -> {topic}")
                count_moved += 1
            except Exception as e:
                print(f"Error moving {d}: {e}")

print(f"\nXong! Da phan loai {count_moved} bai.")