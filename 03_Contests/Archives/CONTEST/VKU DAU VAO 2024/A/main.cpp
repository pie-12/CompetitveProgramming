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
    
    int n; cin >> n;
    map<int,int> lt;
    for(int i = 0; i <= 7; i++){
        int temp = pow(2,i);
    	lt[temp] = 1;
    }

    map<int,int> mp;
    int ans = 0;
    for(int i = 0; i < n; i++){
    	int temp; cin >> temp;
    	mp[temp]++;
    }
    
    for(auto x: mp){
        for(auto i : lt){
            if(mp[i.first - x.first] > 0 && mp[x.first] > 1 && x.first == i.first - x.first) 
            {
                cout << x.first << endl;
                ans += (x.second * (x.second - 1) / 2); 
            }
            if(mp[i.first - x.first] > 0 && mp[x.first] > 0 && x.first != i.first - x.first && x.first < i.first - x.first) 
            {
                cout << x.first << ' ' << i.first - x.first << endl;
                ans += (x.second * mp[i.first - x.first]);
            } 
        }
    }
    cout << ans;
    BYE
}
