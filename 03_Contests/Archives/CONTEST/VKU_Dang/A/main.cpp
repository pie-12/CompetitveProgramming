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
    int n, k; cin >> n >> k;
    int sum = 0;
    map <int, bool> mark;
    for(int i = 0; i < n; i++){
    	int temp; cin >> temp;
    	if(temp <= k && mark[temp] == false) {
    		sum += temp;
    		mark[temp] = true;
    	}
    }
    cout << k * (k + 1) / 2 - sum;
    BYE
}
