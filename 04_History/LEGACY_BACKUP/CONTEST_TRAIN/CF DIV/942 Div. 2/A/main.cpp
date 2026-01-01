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
		int n; cin >> n;
		vector <int> a;
		vector <int> b;
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			a.push_back(temp);
		}
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			b.push_back(temp);
		}
		bool done = false;
		int cnt = 0;
		while(done == false){
			done = true;
			for(int i = 0; i < n; i++){
				if(a[i] > b[i]) done = false;
			}
			a.insert(a.begin(), 0);
			cnt ++;
		}
		cout << cnt - 1<< endl;
	}
    BYE
}
