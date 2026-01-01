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
		int n; cin >> n;
		vector<vector<char>> v(n * 2, vector<char> (n * 2, '.'));
		for(int i = 0; i < n * 2; i++){
			for(int j = 0; j < n * 2; j++){
				if(i % 4 < 2 && j % 4 < 2) v[i][j] = '#';
				if(i % 4 > 1 && j % 4 > 1) v[i][j] = '#';
			}
		}
		for(int i = 0; i < n * 2; i++){
			for(int j = 0; j < n * 2; j++){
				cout << v[i][j];
			}
			cout << endl;
		}
	}
    BYE
}
