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
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    int best = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            if(a[i - 1] == 0) cnt++;
            if(a[i - 1] == 1 || i == 0) cnt = 1;
        }
        else cnt = 0;
        best = max(cnt, best);
    }   
    cout << best << endl;
}
    bye
}