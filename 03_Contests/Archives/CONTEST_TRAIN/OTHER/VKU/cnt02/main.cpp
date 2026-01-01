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
	for(auto x: mp){
		if(x.first != 0)
			ans += (mp[0 - x.first] * mp[x.first]); 
	}
	vector <int> dp(200005);
	dp[1] = 0;
	for(int i = 2; i < 200005; i++){
		dp[i] = dp[i - 1] + (i - 1);
	}
	cout << ans/2 + dp[mp[0]];
	return 0;
}
