#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;

	int a[n], dp[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	dp[0] = 0;
	dp[1] = abs(a[0] - a[1]);
	for(int i =  2; i < n; i++){
		int mini = LONG_LONG_MAX;
		for(int j = 1; j <= k; j++){
		if (i - j >= 0)
		mini = min(dp[i - j] + abs(a[i] - a[i - j]) , mini);
		}
		dp[i] = mini;
	}
	
	cout << dp[n - 1];
	return 0;
}