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

    int a, b, n;
    cin >> a >> b >> n;
    a %= b;
    a *= 10;
    string s = "";
    vector <bool> mark(2e6, false);
    for(int i = 0; i < 2e6; i++){
        mark[i] = true;
        s += (char)(a / b + 48);
        a %= b;
        a *= 10;
    }
    cout << s[(n - 1) % s.size()];
    return 0;     
}   