#include <bits/stdc++.h>
using namespace std;

// Dùng INT_MAX làm giá trị vô cực
const int INF = INT_MAX;

/**
 * Hàm chạy thuật toán Dijkstra
 * @param startNode Chỉ số của đỉnh bắt đầu (0-based)
 * @param V Tổng số đỉnh
 * @param adj Danh sách kề biểu diễn đồ thị
 */
void dijkstra(int startNode, int V, const vector<vector<pair<int, int>>>& adj) {
    
    // Hàng đợi ưu tiên (min-priority queue) để lưu {distance, node}
    // Nó sẽ luôn ưu tiên cặp có distance nhỏ nhất lên đầu
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Vector để lưu khoảng cách ngắn nhất từ nguồn đến mọi đỉnh
    // Khởi tạo tất cả bằng vô cực
    vector<int> dist(V, INF);

    // Khoảng cách từ đỉnh bắt đầu đến chính nó là 0
    dist[startNode] = 0;
    pq.push({0, startNode}); // Thêm đỉnh bắt đầu vào queue với khoảng cách 0

    while (!pq.empty()) {
        // Lấy đỉnh có khoảng cách nhỏ nhất ra khỏi queue
        int u = pq.top().second; // u là chỉ số đỉnh (0-based)
        int d = pq.top().first;  // d là khoảng cách hiện tại đến u
        pq.pop();

        // Bỏ qua nếu đã tìm thấy đường đi tốt hơn (đây là đường đi cũ)
        if (d > dist[u]) {
            continue;
        }

        // Duyệt qua tất cả các đỉnh kề (v) của u
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            // "Relaxation": Nếu tìm thấy đường đi ngắn hơn đến v
            if (dist[u] + weight < dist[v]) {
                // Cập nhật khoảng cách mới cho v
                dist[v] = dist[u] + weight;
                // Thêm v vào priority queue để xử lý các đỉnh kề của nó
                pq.push({dist[v], v});
            }
        }
    }

    // In kết quả
    cout << "Khoang cach ngan nhat tu dinh 1:" << endl;
    for (int i = 0; i < V; ++i) {
        // i là 0-based (0-5), (i+1) là 1-based (1-6)
        cout << "Den " << (i + 1) << ": ";
        if (dist[i] == INF) {
            cout << "Khong co duong di" << endl;
        } else {
            cout << dist[i] << endl;
        }
    }
}

int main() {
    // Tổng số đỉnh
    int V = 6;

    // Đồ thị này dùng 1-based (1-6). 
    // Chúng ta sẽ dùng 0-based (0-5) trong code.
    // Đỉnh 1 -> chỉ số 0
    // Đỉnh 2 -> chỉ số 1
    // ...
    // Đỉnh 6 -> chỉ số 5

    // Danh sách kề: adj[u] -> chứa danh sách các pair{v, weight}
    vector<vector<pair<int, int>>> adj(V);

    // Thêm các cạnh (sử dụng chỉ số 0-based)
    
    // Từ Đỉnh 1 (chỉ số 0)
    adj[0].push_back({1, 7});  // 1 -> 2 (weight 7)
adj[0].push_back({2, 12}); // 1 -> 3 (weight 12)
    
    // Từ Đỉnh 2 (chỉ số 1)
    adj[1].push_back({2, 2});  // 2 -> 3 (weight 2)
    adj[1].push_back({3, 9});  // 2 -> 4 (weight 9)

    // Từ Đỉnh 3 (chỉ số 2)
    adj[2].push_back({4, 10}); // 3 -> 5 (weight 10)

    // Từ Đỉnh 4 (chỉ số 3)
    adj[3].push_back({5, 1});  // 4 -> 6 (weight 1)
    
    // Từ Đỉnh 5 (chỉ số 4)
    adj[4].push_back({3, 4});  // 5 -> 4 (weight 4)
    adj[4].push_back({5, 5});  // 5 -> 6 (weight 5)

    // Từ Đỉnh 6 (chỉ số 5) không có cạnh đi

    // Chạy thuật toán Dijkstra bắt đầu từ đỉnh 1 (chỉ số 0)
    dijkstra(0, V, adj);

    return 0;
}
