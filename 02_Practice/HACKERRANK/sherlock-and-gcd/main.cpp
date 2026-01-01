#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int gcd;
		cin >> gcd;
		for(int i = 1; i < n; i++)
		{	
			int temp;
			cin >> temp;
			gcd = __gcd(gcd, temp);
		}
		if(gcd == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}
	return 0;
}



