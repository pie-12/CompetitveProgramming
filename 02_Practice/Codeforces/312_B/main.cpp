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

    float x = 0;
    int a, b, c, d; cin >> a >> b >> c >> d;
    float trung = 1.0 * a / b;
    float hut = (1 - 1.0 * a / b) * (1 - 1.0 * c / d);
    for(int i = 0; i < 1e6; i++){
        x = trung + hut * x; 
    }

    cout << fixed << setprecision(12) << x;
    bye
}
