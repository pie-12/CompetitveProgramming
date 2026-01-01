//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
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
#define int long long
#define float long double
#define endl '\n'
using namespace std;

HI {
    IO FAST
    int t; cin >> t;
    while(t--){
    	int a, b, c, d; cin >> a >> b >> c >> d;
    	if(a > b) swap(a, b);
    	if(c > d) swap(c, d);
    	if((c >= a && c <= b && d >= b) || (a >= c && a <= d && b >= d)) cout << "YES" << endl;
    	else cout << "NO" << endl;
    }
    BYE
}

