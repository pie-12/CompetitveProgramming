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
    int n; cin >> n;
    for(int i = 0; i < n; i++){
    	int a, b, c; cin >> a >> b >> c;
    	if(a < b && b < c) cout << "STAIR" << endl;
    	else if(a < b && b > c) cout << "PEAK" << endl;
    	else cout << "NONE" << endl;
    }
    BYE
}
