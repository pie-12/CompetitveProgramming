/**
 *    author:  pie-12 (◕‿◕)
 *    created: 13.09.2025 11:02:19
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
   int n, k; cin >> n >> k;
   vector<int> v(n); for(auto &x: v) cin >> x;
   vector<int> res;
   for(int i = 0; i < n - 1; i++){
   		for(int j = i; j < n; j++){
	   			int lo=INT_MAX, hi=-INT_MAX;
	   			for(int ii = i; ii <= j; ii++){
	   				lo=min(v[ii],lo);
	   				hi=max(v[ii],hi);	   				
	   			}
   			int f = (hi - lo) * (j - i + 1);
   			res.push_back(f);
   		}
   }
   debug(res);
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