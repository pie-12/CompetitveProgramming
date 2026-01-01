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
    ll n; cin >> n;
    set <ll> s;
    for(int i = 1; i <= sqrt(n); i++){
    	if(n % i == 0){
    		s.insert(i);
    		s.insert(n/i);
    	}
    }
    ll sum = 0;
    for(auto x: s){
    	sum += x;
    }
    cout << sum;
    BYE
}
