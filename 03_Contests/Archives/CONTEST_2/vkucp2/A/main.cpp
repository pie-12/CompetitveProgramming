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
    IO
    FAST
    // freopen("TRIANGLES.INP","r",stdin);
	// freopen("TRIANGLES.OUT","w",stdout);
    int n; cin >> n;
    vector <int> a(n);
    map <int,int> mp;
    map <int,int> pos;
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto x: mp){
        int index = 0;
        pos[x.first] = index;
        index++;
    }    

    //TH1
    // for(auto x: mp){
    //     if(x.second > 2) cnt++;
    // }

    //TH2
    for(auto x: mp){
        if(x.second > 1){
            auto it = mp.lower_bound(2 * x.first);
            cerr << (*it).first << endl;
            if((*it).second != 0) cnt += (pos[(*it).first] - pos[x.first]);
        }
    }

    

    cout << cnt;
    BYE
}
