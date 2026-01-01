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
    
   

    int test; cin >> test;
    while(test--){
    	string s, t; cin >> s >> t;
	    int index = 0;

	    for(int i = 0; i < s.size(); i++){
	    	if(index == t.size()) {if(s[i] == '?') s[i] = 'z';}
	    	else {
	    		if(index < t.size()){
	    			if(s[i] == t[index] || s[i] == '?'){
	    				s[i] = t[index];
	    				index++;
	    			}
	    		}
	    	}
	    }

		if(index == t.size()) cout << "YES" << endl << s << endl;
		else cout << "NO" << endl;
	}
    BYE
}
