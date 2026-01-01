//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define hi signed main()
#define bye return 0;
#define int long long
#define float long double
#define endl '\n'
using namespace std;
hi {
    //io
    fast
    
    int t; cin >> t;
    while(t--){
    map <int,int> mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int minu, temp; cin >> minu >> temp;
        if(mp[temp] == 0) mp[temp] = minu;
        else mp[temp] = min(minu, mp[temp]);
    }
    int ans = -1;
    if(mp[11] > 0) ans = mp[11];  
    if(mp[01] > 0 && mp[10] > 0 && ans != -1) ans = min(ans, mp[01] + mp[10]);
    else if(mp[01] > 0 && mp[10] > 0 && ans == -1) ans = mp[01] + mp[10];
    cout << ans << endl;
}

    bye
}