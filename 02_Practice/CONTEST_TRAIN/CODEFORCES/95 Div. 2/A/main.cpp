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

void pr(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'a') cout << char((int)s[i] - 32);
		else cout << char((int)s[i] + 32);
	}
}
HI {
    IO FAST
    int low = 0, up = 0;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
    	if(s[i] >= 'a') low++;
    	else up++;
    }
    if(up == s.size() || (low == 1 && s[0] >= 'a')) pr(s);
    else cout << s;
    BYE
}

