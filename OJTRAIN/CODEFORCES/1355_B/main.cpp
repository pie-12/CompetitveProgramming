//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0, ans = 0;
    int hi = -1;
    for(int i = 0; i < n; i++){
        hi = max(hi, a[i]);
        cnt++;
        if(cnt == hi){
            cnt = 0;
            hi = -1;
            ans ++;
        }
    }
    cout << ans << endl;
}
    return 0;
}