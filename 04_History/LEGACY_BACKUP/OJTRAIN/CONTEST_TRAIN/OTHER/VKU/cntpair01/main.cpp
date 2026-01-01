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
	map <int, int> mp;
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		mp[temp]++;
	}
	int ans = 0;
	int dp[10000];
	dp [1] = 0;
	dp [2] = 1; 
	for (int i = 3; i < 10000; i++){
		dp[i] = dp[i - 1] + (i - 1);
	}
	for(auto it:mp){
		ans += dp[it.second];
	}
	cout << ans;
	return 0;
}



