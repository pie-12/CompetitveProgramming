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
bool isChinhPhuong(int n){
	if(n <= 0) return false;
	if((int)pow(n, 1.0 / 2) * (int)pow(n, 1.0 / 2) == n) {
   		return true;
   	}
   	return false;
}
bool isLapPhuong(int n){
	if(n <= 0) return false;
	if((int)pow(n, 1.0 / 3) * (int)pow(n, 1.0 / 3) * (int)pow(n, 1.0 / 3) == n){
		return true;
   	}
   	return false;
}

HI {
    FAST
	
	cout << isLapPhuong(44);
    BYE
}
