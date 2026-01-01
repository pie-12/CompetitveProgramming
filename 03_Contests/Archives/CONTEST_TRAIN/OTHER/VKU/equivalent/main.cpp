#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string a, b;
	cin >> a >> b;
	map <char,int> mpa;
	map <char,int> mpb;
	for (int i = 0 ; i < a.size(); i++){
		mpa[a[i]]++;
	}
	for (int i = 0; i < b.size(); i++){
		mpb[b[i]]++;
	}
	int ans = 0;
	for(int i = 0; i <= 25; i++){
		ans += min(mpa[char('a' + i)] , mpb[char('a' + i)]);
	}
	cout << ans;
	return 0;
}



