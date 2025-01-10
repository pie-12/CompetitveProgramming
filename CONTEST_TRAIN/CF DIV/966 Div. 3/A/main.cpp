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
    
    int n; cin >> n;
    while(n--){
    	string s; cin >> s;
    	if(s[0] != '1' || s[1] != '0' || s[2] == '0' || (s[2] == '1' && s.size() == 3) || s.size() < 3)  cout << "NO" << endl;
    	else cout << "YES" << endl;
    }
    BYE
}
