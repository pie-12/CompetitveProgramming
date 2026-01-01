#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector <int> a(n+10);
	for (int i = 1; i <= n; i++){
        cin >> a[i];
	}
	vector <int> dp(n+10,1e5);
	//dp[i]:chi phi nho nhat di duoc tai pos i
	dp[1] = 0;
	dp[2] = abs(a[1]-a[2]);
	for (int i = 3; i <= n; i++){
        dp[i] = min(dp[i-1]+abs(a[i-1]-a[i]),dp[i-2]+abs(a[i-2]-a[i]));
	}
    cout << dp[n];
	return 0;
}
