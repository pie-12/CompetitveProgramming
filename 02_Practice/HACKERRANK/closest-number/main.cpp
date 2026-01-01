#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;


signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--){
		int a, b, x;
		cin >> a >> b >> x;
		double mul1 = (pow(a, b) / x)*1.0;
		double mod = mul1 - (int)(mul1);
		if(mod <= 0.5) cout << (int)mul1 * x << endl;
		else cout << (int)(mul1 + 1) * x << endl;
	}
	return 0;
}



