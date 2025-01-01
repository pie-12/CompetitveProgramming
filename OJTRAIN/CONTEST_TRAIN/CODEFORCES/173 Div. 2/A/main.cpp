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

HI {
    IO FAST
    
    int n; cin >> n;
    int x = 0;
    for(int i = 0; i < n; i++){
    	string s; cin >> s;
    	if(s.find('+') != string::npos) x++;
    	else x--;
    }
    cout << x;
    BYE
}
