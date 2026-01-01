#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, c;
	cin >> n >> c;
	multimap <int,int> mp;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		mp.insert({x , y});
	}
	int cnt = 0;
	for(auto x : mp){
		if(c >= x.first ){
			c += x.second;
			cnt ++;
		}
		else break;
	}
	cout << cnt;
	return 0;
}