#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    io
    fast
	int n;
	cin >> n;
	int a[n], ans = 1;
	for(int i = 0; i < n; i++) cin >> a[i];

	for(int i = 1; i < n; i++){
		int cnt = 1;
		for(int u = i - cnt, v = i + cnt; (u >= 0 &&  v< n); cnt++){

		}
		ans = max(cnt , ans);
	}
	
	
	return 0; 
}