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
    map <char,int> mp;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
    	mp[s[i]]++;
    }
    if(mp[s[0]] == s.size()) cout << "NO" << endl;
    else cout << "YES" << endl << s.substr(1,s.size() - 1) << s[0] << endl;
}
    BYE
}
