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

ll powerr(ll a, ll b){
    ll res = 1;
    for(ll i = 0; i < b; i++) res *= a;
    return res;
}

ll rm (ll n){
    string s = to_string(n);
    n = n  % (powerr(10, s.size() - 1));
    return n;
}

bool isPrime(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool check(ll n){
    while(n > 0){
        if(isPrime(n) == false) return false;
        if(n < 10) break;
        n = rm(n);
    }
    return true;
}

HI {
    IO FAST
    
    ll n; cin >> n;    
    if(check(n) == true) cout << "YES";
    else cout << "NO";
    BYE
}
