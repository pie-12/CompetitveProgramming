#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 5);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    vector<int> prefix(n + 5);
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + arr[i];
    int ans = 0;
    for (int i = 0; i <= m; i++) {
        int res = prefix[i] + prefix[n] - prefix[n - m + i];
        ans = max(ans, res);
    }
    cout << ans << '\n';
    return 0;
}
