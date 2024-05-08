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
    int n, x; cin >> n >> x;
    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % x != 0){
        cout << n << endl;
        continue;
    }
    int sum_l = sum, sum_r = sum;
    int cnt_l = 0, cnt_r = 0;
    for(int i = 0; i < n; i++){
        if(sum_l % x != 0) break;
        sum_l -= a[i];
        cnt_l ++;        
    }
    for(int i = n - 1; i >= 0; i--){
        if(sum_r % x != 0) break;
        sum_r -= a[i];
        cnt_r ++;        
    }   
    int cnt = min(cnt_l, cnt_r);
    if(n - cnt == 0) cout << -1 << endl;
    else cout << n - cnt << endl;
    }
    return 0;
}