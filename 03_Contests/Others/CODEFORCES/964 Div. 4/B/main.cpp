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
    
    int t; cin >> t;
    while(t--){
    	int a, b, c, d; cin >> a >> b >> c >> d;
    	int win = 0, ans = 0;
    	if(a > c){
    		win++;
    		if(b > d) win++;
    		if(b < d) win--;
            if(b == d) win++;
    	}
    	if(a < c){
    		win--;
    		if(b > d) win++;
    		if(b < d) win--;
            if(b == d) win--;
    	}
    	if(a == c){
    		if(b > d) win++;
    		if(b < d) win--;
            if(b == d);
    	}

    	if(win > 0){
    		ans++;
    	}
    	win = 0;

    	if(a > d){
    		win++;
    		if(b > c) win++;
    		if(b < c) win--;
            if(b == c) win++;
    	}
    	if(a < d){
    		win--;
    		if(b > c) win++;
    		if(b < c) win--;
            if(b == c) win--;
    	}
    	if(a == d){
    		if(b > c) win++;
    		if(b < c) win--;
            if(b == c);
    	}

    	if(win > 0){
    		ans++;
    	}
    	win = 0;

    	if(b > c){
    		win++;
    		if(a > d) win++;
    		if(a < d) win--;
            if(a == d) win++;
    	}

    	if(b < c){
    		win--;
    		if(a > d) win++;
    		if(a < d) win--;
            if(a == d) win--;
    	}

        if(b == c){
            if(a > d) win++;
            if(a < d) win--;
            if(a == d);
        }

    	if(win > 0){
    		ans++;
    	}
    	win = 0;

    	if(b > d){
    		win++;
    		if(a > c) win++;
    		if(a < c) win--;
            if(a == c) win++;
    	}

    	if(b < d){
    		win--;
    		if(a > c) win++;
    		if(a < c) win--;
            if(a == c) win--;
    	}

        if(b == d){
            if(a > c)win++;
            if(a < c)win--;
            if(a == c);
        }

    	if(win > 0){
    		ans++;
    	}
    	win = 0;

    	cout << ans << endl;
    }
    BYE
}
