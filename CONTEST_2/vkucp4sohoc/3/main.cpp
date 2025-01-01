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
    //IO 
    FAST
    
    ll n; cin >> n;
    bool pr = true;
    for(int i = 2; i <= sqrt(n); i++){
    	if(n % i == 0){
    		pr = false;
    		break;
    	}
    }
    if(n == 0 || n == 1) pr = false;
    if(n == 2) pr = true;
    if(pr == false) cout << "NO" << endl;
    else cout << "YES" << endl;
    BYE
}	
