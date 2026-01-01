#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string a, b;
	cin >> a >> b;

	int n = a.size();
	int m = b.size();
	a = '@' + a;
	b = '@' + b;
	int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));
	for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++){
        if (a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	}
	cout << dp[n][m];
	return 0;
}
