#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast
	int t;
	cin >> t;
	while(t--){
		int n, a, b, cnt = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			if(a > b) cnt++;
		}
		cout << cnt << endl;
	}
	return 0; 
}