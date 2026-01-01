#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> prime = {2, 3, 5, 7, 11, 13};
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        ll x; cin >> x;
        for (int j = 0; j < 6; j++) {
            int cnt = 0;
            while (x % prime[j] == 0) {
                x /= prime[j];
                cnt ^= 1;
            }
            a[i] ^= (cnt << j);
        }
    }
    vector<vector<int>> dp(n + 1, vector<int>(1 << 6));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int mask = 0; mask < (1 << 6); mask++) {
            dp[i][mask] = dp[i - 1][mask] + dp[i - 1][mask ^ a[i]];
            dp[i][mask] %= MOD;
        }
    }
    cout << (dp[n][0] - 1 + MOD) % MOD << '\n';
}
