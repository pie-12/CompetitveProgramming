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

    int n; cin >> n;
    float x, y;
    for(int i = 0; i < n; i++){
        float a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;
        if(a1 == 0 || b1 == 0) x = 0;
        else x = a1*pow(10,b1);
        if(a2 == 0 || b2 == 0) y = 0;
        else y = a2*pow(10,b2);
        if(x > y) cout << "X > Y" << endl;
        else if(x < y) cout << "X < Y" << endl;
        else cout << "X = Y" << endl;
    }
    return 0;
}