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
	vector <int> v {100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000, 10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110, 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10};    
	int t; cin >> t;
	while(t--){
		int temp; cin >> temp;
		for(int i = 0; i < v.size(); i++){
			while(temp % v[i] == 0) temp /= v[i];
		}
		if(temp == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    BYE
}
