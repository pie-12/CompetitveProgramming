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
	int a[n], b[m];
	vector <int> c(m, 0);
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	int pos = 0;
	for(int i = 0; i < m; i++){
		if(i > 0) c[i] = c[i - 1];
		for(int j = pos; j < n; j++){
			if(a[j] < b[i] ) {c[i]++; a[j] = LONG_LONG_MAX;}
			else{pos = j; break;}

		}
	}
	for(auto x : c){
		cout << x << ' ';
	}
	return 0;
}



