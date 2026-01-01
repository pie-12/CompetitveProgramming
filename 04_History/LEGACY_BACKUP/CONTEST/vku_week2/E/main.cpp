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
    
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < k; i++){
    	cin >> a[i];
    }
    sort(a, a + k, greater<int>());
    
    int left = n;
    int sum_T = 0;
    bool T_turn = true, stop = false;
    for(int i = 0; i < k; i++){
    	while(left - a[i] >= 0){
	    	if(left >= a[i] && T_turn == true){
				left -= a[i];
				sum_T += a[i];
				T_turn = false;
	    	}
	    	else if(left >= a[i] && T_turn == false){
	    		left -= a[i];   
	    		T_turn = true;		
	    	}
	    }
    }
    cout << sum_T;
    BYE
}
