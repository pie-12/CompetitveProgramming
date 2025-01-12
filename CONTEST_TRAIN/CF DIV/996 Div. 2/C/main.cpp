#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("main.inp", "r", stdin);
        freopen("main.out", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string path;
    cin >> n >> m >> path;

    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Xác định đường đi
    vector<pair<int, int>> on_path;
    int x = 0, y = 0;
    on_path.push_back({x, y});
    for (char step : path) {
        if (step == 'D') x++;
        else if (step == 'R') y++;
        on_path.push_back({x, y});
    }

    // Tính tổng hàng và cột
    vector<int> row_sum(n, 0), col_sum(m, 0);
    vector<vector<bool>> is_path(n, vector<bool>(m, false));
    for (auto [i, j] : on_path) {
        is_path[i][j] = true;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!is_path[i][j]) {
                row_sum[i] += grid[i][j];
                col_sum[j] += grid[i][j];
            }
        }
    }

    // Tìm tổng ma trận (magic_sum)
    int total_sum = accumulate(row_sum.begin(), row_sum.end(), 0);
    int magic_sum = total_sum / n;

    // Điền giá trị cho các ô trên đường đi
    int value = 1;
    for (auto [i, j] : on_path) {
        grid[i][j] = magic_sum - row_sum[i] - col_sum[j] + grid[i][j];
        row_sum[i] += grid[i][j];
        col_sum[j] += grid[i][j];
    }

    // Xuất kết quả
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
