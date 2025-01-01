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
#define fi first
#define se second
#define endl '\n'
using namespace std;

HI {
    IO FAST    
    int n; cin >> n;
    vector<pair<int,int>> v;
    set <int> r_str;
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        v.push_back({l,r});
    }
    sort(v.begin(), v.end());
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++){
        r_str.insert(v[i].se);
        cnt++;
        while(*(r_str.begin()) < v[i].fi && r_str.size() > 0){
            r_str.erase(r_str.begin());
            cnt--;
        }
        ans = max(ans, cnt);    
    }
    cout << ans;
    BYE
}
