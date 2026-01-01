//yo, i'm pie12 (・ω・)ﾉ 
#include <bits/stdc++.h>
#define HI  signed main()
#define int long long
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
int const MOD = 1e9 + 7;
int binpow (int a, int b){

    if (b == 0)
        return 1;
    int x = binpow (a, b/2);
    if (b % 2 == 1)
        return a * x * x % MOD;
    else
        return x * x % MOD;

}

HI {
    IO FAST
    
    int a, b, c, d, n; cin >> a >> b >> c >> d >> n;
    for(int n = 1; n <= 10; n++){
   	int res_g = (pow(-1, n + 1) * (c - 2 * d) + binpow(2, n) * (c + d))/3;
   	cout << res_g << endl;
   }

    int res = (c1*pow((3-sqrt(17))/2, n) + c2*(pow((3+sqrt(17))/2, n)));

    //cout << res + res_g + res_g_1 + res_g_2;
    BYE
}
