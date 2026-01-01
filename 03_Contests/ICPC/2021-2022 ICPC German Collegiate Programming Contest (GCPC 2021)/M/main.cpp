/**
 *    author:  pie-12 (◕‿◕)
 *    created: 06.11.2025 17:14:16
**/

#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

#ifdef LOCAL
#include "D:/debug.h"
#else
#define debug(...) 42
#endif

void solve() 
{
    ld d, s, e;
    cin >> d >> s >> e;
    cout << fixed << setprecision(10);
    if (s <= d - s - e) 
    {
        ld ans = (s * (d - s)) / (d * (d - s - e));
        cout << ans << '\n';
    }
    else 
    {
        ld ans = (s + e) / d;        
        cout << ans << '\n';
    }
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