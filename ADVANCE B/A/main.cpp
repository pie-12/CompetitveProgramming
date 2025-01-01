//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
#define int long long
#define float long double
#define endl '\n'
using namespace std;
#ifndef ONLINE_JUDGE
#define IO \
freopen("main.inp","r",stdin); \
freopen("main.out","w",stdout);
#else
#define IO
#endif
#define FAST \
ios::sync_with_stdio(false); \
cin.tie(nullptr);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define BYE \
cerr <<"Time elapsed: " << TIME << " s\n"; \
return 0;
int MAXn = 1e12;

HI {
    //IO
    freopen("tongmu3.inp", "r", stdin);
    freopen("tongmu3.out", "w", stdout); 
    FAST
    /*
		a^3 + b^3 = x
		a^3 = x - b^3
		a = pow(x - b^3, 1.0/3)
    */
    int t; cin >> t;
    while (t--){
	    int x;
	    cin >> x;
	    bool ok = false;
		for(int b = 1; b < pow(x, 1.0/3); b++){
			int a = round(pow(x - pow(b, 3), 1.0/3));
			int c = pow(a, 3) + pow(b, 3);
			if(c == x) ok = true;
		}    
		if(ok == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    BYE
}
