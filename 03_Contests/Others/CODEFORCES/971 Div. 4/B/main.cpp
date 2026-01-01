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
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s[n];
		for(int i = 0; i < n; i++) cin >> s[i];
		for(int i = n - 1; i >= 0; i--){
			if(s[i][0] == '#') cout << 1 << ' ';
			if(s[i][1] == '#') cout << 2 << ' ';
			if(s[i][2] == '#') cout << 3 << ' ';
			if(s[i][3] == '#') cout << 4 << ' ';
		}
		cout << endl;
	}   
    BYE
}
