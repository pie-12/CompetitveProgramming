/**
 *    author:  pie-12 (◕‿◕)
 *    created: 06.11.2025 14:30:41
**/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

#ifdef LOCAL
#include "D:/debug.h"
#else
#define debug(...) 42
#endif

void solve() 
{
    string s; cin >> s;
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
    	if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') break;
    	else s.erase(i,1);
    }
    cout << s << "ntry";
    
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