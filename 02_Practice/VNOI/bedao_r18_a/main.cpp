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
    
    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        int gcd = __gcd(a,b);
        if(a == 0){
            cout << 0 << ' ' << 1 << endl;
            continue;
        }
        if((a > 0 && b > 0) || (a < 0 && b < 0)){
            a = abs(a) / abs(gcd); b = abs(b) / abs(gcd);
            cout << a << ' ' << b << endl;
            continue;
        }
        a /= abs(gcd); b /= abs(gcd);
        if(a + b > 0){
            cout << a << ' ' << b << endl;
            continue;
        }
        if(a + b < 0){ 
            cout << - a << ' ' << - b << endl;
            continue;
        }
        if(a + b == 0){ 
            cout << 0 << ' ' << 0 << endl;
            continue;
        }            
    }
    bye
}