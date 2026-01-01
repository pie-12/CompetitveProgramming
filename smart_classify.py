import os
import requests
import re
import json
import time

# --- CẤU HÌNH ---
PRACTICE_DIR = r"D:\CODING\CP\02_Practice"
TARGET_DIR = r"D:\CODING\CP\02_Practice\Categorized"

# Danh sách ưu tiên Topic (Bài có nhiều tag sẽ chọn cái nằm trên cùng)
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

# Mapping từ CF Tag -> Folder Name của mình
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

# Heuristic Keywords (Dùng để quét Code nếu API thất bại)
CODE_KEYWORDS = {
    "Graph_Theory": [r"adj[", r"vector<.*>.*adj", r"\bdfs(", r"\bfs(", r"\bdijkstra", r"\bkruskal", r"\btopological"],
    "Data_Structures": [r"segtree", r"fenwick", r"update(", r"query(", r"\bdsu\b", r"union_sets"],
    "Dynamic_Programming": [r"dp[", r"f[.*][.*]", r"memo["],
    "Mathematics": [r"1e9\s*\+\s*7", r"998244353", r"binpow", r"gcd(", r"sieve", r"prime"],
    "Binary_Search": [r"low\s*<=\s*high", r"mid\s*=", r"binary_search"],
    "Two_Pointers": [r"while\s*\(.*r\s*<\s*n\)", r"l++", r"r++"]
}

# --- 1. LOAD CF API ---
print("dang tai du lieu tu Codeforces API...")
try:
    cf_data = requests.get("https://codeforces.com/api/problemset.problems").json()
    problems = {}
    if cf_data["status"] == "OK":
        for p in cf_data["result"]["problems"]:
            # Key: ContestID_Index (VD: 1355_A)
            key = f"{p.get('contestId')}_{p.get('index')}"
            problems[key] = p.get("tags", [])
    print(f"-> Da load {len(problems)} bai tap tu API.")
except Exception as e:
    print(f"-> Loi API: {e}")
    problems = {}

# --- 2. QUÉT VÀ PHÂN LOẠI ---
print(f"\nDang quet thu muc: {PRACTICE_DIR} ...")

def get_code_topic(filepath):
    """Đọc file code và đoán topic"""
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            for topic, patterns in CODE_KEYWORDS.items():
                for pat in patterns:
                    if re.search(pat, content, re.IGNORECASE):
                        return topic, f"Code keyword: {pat}"
    except:
        pass
    return None, None

def determine_topic(folder_name, folder_path):
    # 1. Check API (Nếu tên folder dạng 1355_A)
    # Regex bắt format: số + _ + chữ (VD: 1355_A, 4_C)
    match = re.match(r"^(\d+)_([A-Z0-9]+)$", folder_name, re.IGNORECASE)
    if match:
        key = f"{match.group(1)}_{match.group(2).upper()}"
        if key in problems:
            tags = problems[key]
            # Map tags sang Topic của mình
            mapped_topics = set()
            for t in tags:
                if t in TAG_MAP: mapped_topics.add(TAG_MAP[t])
            
            # Chọn topic ưu tiên nhất
            for prio in TOPIC_PRIORITY:
                if prio in mapped_topics:
                    return prio, f"API Tags: {tags}"
    
    # 2. Check Code (Nếu API không ra hoặc không phải bài CF chuẩn)
    main_cpp = os.path.join(folder_path, "main.cpp")
    if os.path.exists(main_cpp):
        topic, reason = get_code_topic(main_cpp)
        if topic:
            return topic, reason
            
    return "Uncategorized", "Khong nhan dien duoc"

# --- MAIN LOOP ---
count = 0
for root, dirs, files in os.walk(PRACTICE_DIR):
    # Bỏ qua folder hệ thống và folder đã phân loại
    if "Categorized" in root or "Topic_Training" in root:
        continue
        
    for d in dirs:
        folder_path = os.path.join(root, d)
        
        # Chỉ xử lý nếu là thư mục lá (chứa main.cpp)
        if os.path.exists(os.path.join(folder_path, "main.cpp")):
            topic, reason = determine_topic(d, folder_path)
            
            if count < 20: # Chỉ in 20 bài đầu demo
                print(f"[{topic.upper()}] \t {d} \t -> Ly do: {reason}")
            
            count += 1

print(f"\nTong so bai quet duoc: {count}")
print("(Day chi la che do xem thu, chua move file)")
