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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a = 1, b = 1, c = 1;
        while (c < 26 && n > 3){
            c++;
            n--;
        }
        while (b < 26 && n > 3){
            b++;
            n--;
        }
        while (a < 26 && n > 3){
            a++;
            n--;
        }
        cout << (char)((int)'a' - 1 + a) << (char)((int)'a' - 1 + b) << (char)((int)'a' - 1 + c) << endl;
    }
    BYE
}