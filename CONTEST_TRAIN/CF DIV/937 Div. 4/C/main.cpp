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
	    string s; cin >> s;
	    string ss = s.substr(0, 2);
	    int hour = stoll(ss);
	    ss = s.substr(2, 3);
	    bool isAM = (hour > 11 && hour < 24) ? false : true;
	    if(isAM == false && hour != 12) hour -= 12;
	    if(hour == 0) hour = 12; 
	    string shour = to_string(hour);
	    if(shour.size() == 1) shour = "0" + shour;
	    cout << shour << ss;
	    if(isAM == true) cout << ' ' << "AM" << endl;
	    else cout << ' ' << "PM" << endl;
	}
    
    BYE
}
