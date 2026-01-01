#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	map <int,int> mp;
	for (int i = 1; i <= m; i++){
		int temp;
		cin >> temp;
		mp[temp]++;
	}
	for (int i = 1; i <= n; i++){
		if(mp[i] == 0) cout << i << ' ';
	}
	return 0;
}



