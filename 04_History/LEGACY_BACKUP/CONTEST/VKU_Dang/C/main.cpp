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
    int a, b, n;
    cin >> a >> b >> n;

    int lcm = (a * b) / __gcd(a,b);

    //chat binary
    int lo = 0, hi = LLONG_MAX;

    while(lo <= hi){
        int mid = (lo + hi)/2;
        if((mid / a) + (mid / b) - 2 * (mid/lcm) == n && (mid % a == 0 || mid % b == 0)){
            cout << mid << endl;
            break;
        } 
        else if ((mid / a) + (mid / b) - 2 * (mid/lcm) < n) lo = mid + 1;
        else hi = mid - 1;
    }
    BYE
}
