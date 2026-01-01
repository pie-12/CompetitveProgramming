//yo, i'm pie12 (・ω・)ﾉ 
#include <bits/stdc++.h>
#define HI  signed main()
#define ll long long
#define ld long double
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

HI {
    IO FAST
    
    int t; cin >> t;
    while(t--){
	    ll x, y, k; cin >> x >> y >> k;
	    ll xx = ceil(1.0*x / k);
	    ll yy = ceil(1.0*y / k);
	   	cout << max(2 * xx - 1, 2 * yy) << endl;
	}
    BYE
}
