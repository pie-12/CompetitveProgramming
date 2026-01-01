#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	map <char,int> mp;
	for (int i = 0; i < s.size(); i++){
		mp[s[i]]++;
	}
	int cnt = 0;
	for (auto it : mp){
		if(it.second % 2 == 1) cnt++;
	}
	if (cnt > 1) cout << cnt - 1;
	else cout << 0;
	return 0;
}



