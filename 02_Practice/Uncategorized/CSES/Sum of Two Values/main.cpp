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
    int n, m; cin >> n >> m;
    map <int,int> mp;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
    	int temp; cin >> temp;
    	mp[temp] = i;
    	a[i] = temp;
    }
    if(m % 2 != 0)
    for(auto x: mp){
    	if(mp[m - x.first] != 0 && mp[x.first] != ){0
    		cout << mp[x.first] << ' ' << mp[m - x.first];
    		return 0;
    	}
    }
    else{
    	int p1 = 0, p2 = 0;
    	for(int i = 1; i <= n; i++){
    		if(p1 == 0 && a[i] == m / 2) p1 = i;
    		else if(p1 != 0 && a[i] == m / 2) p2 = i;
    	}
    	if(p1 * p2 != 0){
    		cout << p1 << ' ' << p2;
    		return 0;
    	}
    	else{
    		for(auto x: mp){
	    		if(mp[x.first] != 0 && mp[m - x.first] != 0 && x.first * 2 != m){
		    		cout << mp[x.first] << ' ' << mp[m - x.first];
		    		return 0;
		    	}
	    	}
    	}
    }   
    cout << "IMPOSSIBLE";
    BYE
}
