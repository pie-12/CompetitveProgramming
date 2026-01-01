#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;
    vector <int> coins(n);
    vector <int> ans(n);
    map <int,int> mp;

    int dp[m+1];
    int first[m+1];

    for (int i = 0; i < n; i++){
        cin >> coins[i];
        ans[i] = coins[i];
    }
    dp[0] = 0;
    for (int j = 1; j <= m; j++) {
        dp[j] = 1e5;
        for (auto c : coins) {
            if (j-c >= 0 && dp[j-c]+1 < dp[j]) {
            dp[j] = dp[j-c]+1;
            first[j] = c;
            }
        }
    }

    if (dp[m] > 1e4) {cout << -1; return 0;}
    cout << dp[m] << endl;
    while (m > 0){
        mp[first[m]]++;
        m -= first[m];
    }
    for (auto x: ans){
        cout << x << " : " << mp[x] << endl;
    }
	return 0;
}
