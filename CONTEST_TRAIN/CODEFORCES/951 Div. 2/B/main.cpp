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

int count (int num){
    for(int i = 1; ; i++){
        if(pow(2, i)>= num) return i;
    }
}
HI {
    IO FAST
    int res; cin >> res;
    int cnt = count(res);
    cout << (int)(3897512 - pow(2, 21));
    // cout << (14 | 4) + (14 & 4) - (14 ^ 4);
    BYE
}
