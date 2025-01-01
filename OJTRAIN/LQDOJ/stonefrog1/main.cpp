#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n], dp[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	dp[0] = 0;
	dp[1] = abs(a[0] - a[1]);
	for(int i =  2; i < n; i++){
		
		dp[i] = min(dp[i - 2] + abs(a[i] - a[i - 2]) , dp[i - 1] + abs(a[i] - a[i - 1]));
	}
	
	cout << dp[n - 1];
	return 0;
}