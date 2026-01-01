/**
 *    author:  pie-12 (◕‿◕)
 *    created: 13.09.2025 08:31:54
**/

#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;

#ifdef LOCAL
#include "D:/debug.h"
#else
#define debug(...) 42
#endif

void solve() 
{
    ll n; cin >> n;
    vector<ll> v(n); for(auto &x: v){
    	cin >> x;
    }
    int ans = v[0];
    for(int i = 1; i < n; i++){
    	ans ^= v[i];
    }
    int deb = v[0];
    for(int i = 1; i < n; i++){
    	deb || v[i];
    }


    string ss = (ans == 0) ? "YES" : "NO";
    cout << ss;
    debug(ans, deb);
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    while (t--) solve();
    cerr << "Built at: " << __DATE__ << " " << __TIME__;
    return 0;
}