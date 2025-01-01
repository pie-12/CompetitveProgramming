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
    //IO 
    FAST

    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    map<ll, ll> mp2;
    map<ll, ll> mp3;

    ll temp = 2;
    for (int i = 0; i < 31; i++)
    {
        mp2[temp] = 1;
        temp *= 2;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!mp[a[i]]) mp3[a[i]]++;
        mp[a[i]]++;
    }

    ll ans = 0;
    map<ll, ll> check;
    for (auto y : mp3)
    {
        if (!check[y.first])
        {
            for (auto x : mp2)
            {
                if (x.first - y.first == y.first) 
                {
                    if (mp[x.first - y.first] != 1) 
                        ans += mp[x.first - y.first] * (mp[x.first - y.first] - 1) / 2;
                }
                else 
                {
                    ans += mp[x.first - y.first] * mp[y.first];
                    check[x.first - y.first] = 1;
                }
            }
        }
    }

    cout << ans << endl;

    BYE
}
