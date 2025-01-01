#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1001;
const int F = 2003;

int src = 0, snk = 2002;
vector<int> adj[F];
int capa[F][F], flow[F][F], level[F];

bool isEdge(int x, int y) {
    if (x % y == 0) return true;
    if (y % x == 0) return true;
    return false;
}

void addEdge(int u, int v, int w) {
    adj[u].push_back(v);
    adj[v].push_back(u);
    capa[u][v] += w;
    // capa[v][u] += w;
}

void bfs() {
    fill(level, level + F, 0);
    queue<int> q; q.push(src);
    level[src] = 1;
    while (q.size()) {
        int u = q.front(); q.pop();
        for (auto v : adj[u]) {
            if (!level[v] && capa[u][v] - flow[u][v] > 0) {
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }
}
 
int dfs(int u, int lim) {
    if (u == snk) return lim;
    for (auto v : adj[u]) {
        if (level[v] > level[u]) {
            if (capa[u][v] - flow[u][v] > 0) {
                int f = dfs(v, min(lim, capa[u][v] - flow[u][v]));
                if (f > 0) {
                    flow[u][v] += f;
                    flow[v][u] -= f;
                    return f;
                }
            }
        }
    }
    return 0;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        addEdge(i, i + N, 1);
        if (isEdge(a[i], x)) {
            addEdge(src, i, 1);
        }
        if (isEdge(a[i], y)) {
            addEdge(i + N, snk, 1);
        }
    }
    for (int i = 1; i + 1 <= n; i++)
    for (int j = i + 1; j <= n; j++) {
        if (isEdge(a[i], a[j])) {
            addEdge(i + N, j, 1);
            addEdge(j + N, i, 1);
        }
    }
    int ans = 0;
    while (1) {
        bfs();
        if (!level[snk]) break;
        for (int f; (f = dfs(src, INT_MAX)) > 0; ) ans += f;
    }
    cout << ans << '\n';
}
