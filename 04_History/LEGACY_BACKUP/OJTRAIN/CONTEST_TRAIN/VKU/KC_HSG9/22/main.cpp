#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	map <int,int> mp;
	int n, x;
	cin >> n >> x;
	for(int i = 0; i < n; i ++){
		int temp;
		cin >> temp;
		mp[temp]++;
	}
	
	int cnt = 0;
	for (auto it : mp){
		if(mp[x - it.first] > 0 && it.second > 0 && x - it.first != it.first){
			cnt = cnt + (mp[x - it.first] * mp[it.first]);
			mp[x - it.first] = 0;
			mp[it.first] = 0;			
		}
	}
	int dp[100000 + 100];
	dp[1] = 0;
	dp[2] = 1;
	for(int i = 3; i <= 100000; i++){
		dp[i] = dp[i-1] + (i - 1);
	}
	if(x % 2 == 0 && mp[x/2] > 0)	cnt += dp[mp[x/2]];

	cout << cnt;
	return 0;
}



