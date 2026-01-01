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
    string s; cin >> s;
    int ans = 0;
   	for(int i = 0; i < s.size(); i++){
   		int o = 0, l = 0, p = 0;
   		for(int j = i; j < s.size(); j++){
   			if(s[j] == 'O') o++;
   			if(s[j] == 'L') l++;
   			if(s[j] == 'P') p++;
   			if(o > 2 || l > 2 || p > 2){
   				ans += s.size() - j;
   				break;
   			}
   		}
   	}
   	cout << ans;
    BYE
}
