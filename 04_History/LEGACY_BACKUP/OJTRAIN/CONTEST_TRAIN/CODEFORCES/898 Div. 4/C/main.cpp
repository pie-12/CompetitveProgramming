//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
#define int long long
#define float long double
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
        int n; cin >> n;
        int pro = 1;
        bool zero = false;
        int lo = 9;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            if(temp == 0 && zero == false){
                zero = true;
            }
            else pro *= temp;
            lo = min(lo, temp);
        }
        if(zero == true) cout << pro << endl;
        else{
            pro /= lo;
            pro *= (lo + 1);
            cout << pro << endl;
        }
    }
    BYE
}
