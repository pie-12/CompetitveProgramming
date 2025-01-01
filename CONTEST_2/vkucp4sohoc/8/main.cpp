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

bool isPrime(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}
HI {
    FAST
    
    ll i = 2, n; cin >> n;
    map <ll,ll> mp;
    if(isPrime(n)){
    	cout << n;
    	return 0;
    }
    while(n > 1){
    	if(i > n/2) break;
    	while(n % i == 0){
    		n /= i;
    		mp[i]++;
    		n 
    	}
    	i++;
    }
    for(auto x: mp){
    	cout << x.first << ' ' << x.second << endl;
    }
    BYE
}
