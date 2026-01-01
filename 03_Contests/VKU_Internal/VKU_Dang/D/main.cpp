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

	int res = 0;
	int n; cin >> n;
	vector <int> a(n + 5, 0);
	vector <int> l(n + 5, 0);
	vector <int> r(n + 5, 0);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) l[i] = min(l[i - 1] + 1, a[i]);
    for(int i = n; i >= 1; i--) r[i] = min(r[i + 1] + 1, a[i]);    
    for(int i = 1; i <= n; i++) res = max(res, min(l[i], r[i]));
   	cout << res;
    BYE
}
