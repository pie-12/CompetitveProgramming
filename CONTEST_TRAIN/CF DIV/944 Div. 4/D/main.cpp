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
    int t; cin >> t;
    while(t--){
    	int cut = 0;
    	string s; cin >> s;
    	bool zero_one = false;
    	for(int i = 0; i < s.size() - 1; i++){
    		if(s[i] != s[i + 1]) cut++;
    		if(s[i] == '0' && s[i + 1] == '1') zero_one = true;
    	}
    	if(zero_one == true && cut > 0) cut--;
    	cout << cut + 1 << endl;
    }
    BYE
}
