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

bool check(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int rv (ll n){
	string s = to_string(n);
	reverse(s.begin(), s.end());
	n = stoll(s);
	return n;
}

HI {
    IO FAST

    int n; cin >> n;
    for(int i = 2; i <= n; i++){
		if(check(i) == true && check(rv(i)) == true) cout << i << ' ';
    }

    BYE
}
