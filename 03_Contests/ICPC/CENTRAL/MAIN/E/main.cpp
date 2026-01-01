#include <bits/stdc++.h>
using namespace std;

const int MAX = 105;
int R, C, N;
vector<string> grid;
vector<pair<int, int>> shrines;
vector<vector<vector<long long>>> dist; 
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
long long bfs() {
    queue<tuple<int, int, int>> q;
    q.push({0, 0, 0}); 
    dist[0][0][0] = 0; 

    while (!q.empty()) {
        auto [x, y, mask] = q.front();
        q.pop();
        if (mask == (1 << N) - 1) {
            return dist[x][y][mask];
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < R && ny >= 0 && ny < C && grid[nx][ny] != '#') {
                int newMask = mask;
                for (int k = 0; k < N; k++) {
                    if (nx == shrines[k].first && ny == shrines[k].second) {
                        newMask |= (1 << k);
                    }
                }
                if (dist[nx][ny][newMask] == -1) {
                    dist[nx][ny][newMask] = dist[x][y][mask] + 1;
                    q.push({nx, ny, newMask});
                }
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> R >> C >> N;
    grid.resize(R);
    dist.resize(R, vector<vector<long long>>(C, vector<long long>(1 << N, -1)));

    for (int i = 0; i < R; i++) {
        cin >> grid[i];
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 'S') {
                shrines.push_back({i, j});
            }
        }
    }
    memset(dist[0][0].data(), -1, (1 << N) * sizeof(long long)); 
    long long result = bfs();
    cout << result << endl;

    return 0;
}