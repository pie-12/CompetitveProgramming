#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m, cnt = 0;
	cin >> n >> m;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(m == 1){
		cout << 0; 
		return 0;
	}
	sort(a, a + n, greater<int>());
	for(int i = 0; i < n; i++){
		if(m - a[i] == 0) {m = 0; cnt++;}
		if(m > 0) {m = (m - min(a[i] - 1, m)); cnt ++;}
	}
	if(m > 0) cout << -1;
		else cout << cnt;
	return 0;
}



