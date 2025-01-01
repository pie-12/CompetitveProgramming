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
    int a, b; cin >> a >> b;
    if(b > a || a % 3 != 0){
        cout << "NO" << endl;
        continue;
    }
    while(b % 3 != 0){
        b++;
    }
    while(a > b){
        a /= 3;
    }
    if(a == b) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    bye
}