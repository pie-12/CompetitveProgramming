/**
 *    author:  pie-12 (◕‿◕)
 *    created: 12.09.2025 21:48:05
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
	int n; cin >> n;
	vector <int> a(n); for(auto &x : a) cin >> x;
	int res_first=0,res_last=0;
	for(int i = 0, j = n - 1; i <= j; ){
		if(a[i] > a[j])res_first+=a[i++];
		else res_first+=a[j--];

		if(i>j)break;
		
		if(a[i] > a[j])res_last+=a[i++];
		else res_last+=a[j--];
 	}  
	cout <<res_first<<' '<<res_last;
	debug(res_first,res_last);    
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