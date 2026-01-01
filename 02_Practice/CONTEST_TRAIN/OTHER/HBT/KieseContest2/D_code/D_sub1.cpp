#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isEdge(int x, int y) {
    if (x % y == 0) return true;
    if (y % x == 0) return true;
    return false;
}

void dfs(int i, vector<int> &vst, vector<vector<int>> &adj) {
    vst[i] = 1;
    for (auto &j : adj[i]) {
        if (!vst[j]) dfs(j, vst, adj);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    int ans = INT_MAX, sav = -1;
    for (int mask = 0; mask < (1 << 20); mask++) {
        vector<vector<int>> adj(21);
        for (auto &i : a) {
            if ((mask >> (i - 1)) & 1) continue;
            if (isEdge(i, x)) {
                adj[x].push_back(i);
                adj[i].push_back(x);
            }
            if (isEdge(i, y)) {
                adj[y].push_back(i);
                adj[i].push_back(y);
            }
        }
        for (int i = 0; i + 1 < n; i++) {
            if ((mask >> (a[i] - 1)) & 1) continue;
            for (int j = i + 1; j < n; j++) {
                if ((mask >> (a[j] - 1)) & 1) continue;
                if (isEdge(a[i], a[j])) {
                    adj[a[i]].push_back(a[j]);
                    adj[a[j]].push_back(a[i]);
                }
            }
        }
        // for (int i = 1; i <= 20; i++) {
        //     for (auto &j : adj[i]) {
        //         cout << "> " << i << ' ' << j << '\n';
        //     }
        // }
        vector<int> vst(21);
        dfs(x, vst, adj);
        if (!vst[y]) {
            if (ans > __builtin_popcount(mask)) {
                ans = __builtin_popcount(mask);
                sav = mask;
            }
        }
    }
    cout << ans << '\n';
    // cout << bitset<20>(sav) << '\n';
    // for (int i = 0; i < 20; i++) {
    //     if ((sav >> i) & 1) {
    //         cout << i + 1 << ' ';
    //     }
    // }
    // cout << '\n';
}
