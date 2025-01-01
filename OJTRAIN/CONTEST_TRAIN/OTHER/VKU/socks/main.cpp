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
	for(auto it:mp){
		ans += (it.second/2);
	}
	cout << ans;
	return 0;
}



