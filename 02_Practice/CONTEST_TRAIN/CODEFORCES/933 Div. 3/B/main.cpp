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
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 1; i < n - 1; i++){
        int times = min({a[i] / 2 , a[i - 1], a[i + 1]});
        a[i] -= 2 * times;
        a[i - 1] -= times;
        a[i + 1] -= times;
    }
    bool yes = true;
    for(int i = 0; i < n; i++){
        if(a[i] != 0) yes = false;
    }
    if(yes == true) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    return 0;
}