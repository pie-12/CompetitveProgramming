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
signed main() {
    //io
    fast
    
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(),a.end());
    // for(auto [x, y] : a) cout << x  << ' ' << y << '\n';
    //i + j= a[i]*a[j]
    long long cnt = 0;
    for(int i = 0; i < n - 1; i++)     
        for(int j = i + 1; j < n; j++){
            if(a[i].first * a[j].first > 2 * n) break;   
            if(a[i].second + a[j].second == a[i].first * a[j].first) cnt++;
        }
    cout << cnt << endl;
}
    bye
}