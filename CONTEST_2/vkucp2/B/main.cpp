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

HI {
    IO FAST

    int n, k; cin >> n >> k;
    int a[n], fre[n];
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        mp[temp]++;
        a[i] = temp;
        fre[i] = mp[temp];
    }
    int cnt = 0;
    for(int j = 0; j < n; j++){
        int res = a[j] * a[j];
        if(k > res) if(mp[k - res] > 0){
            int cuoi = -1;
            for (int i = j; i >= 0; i--)
            {
                if (a[i] + res == k) {
                    cuoi = i;  break;
                }
            }
            if (cuoi == -1) continue;
            cnt += fre[cuoi];
        }
    }
    cout << cnt;
    BYE
}
