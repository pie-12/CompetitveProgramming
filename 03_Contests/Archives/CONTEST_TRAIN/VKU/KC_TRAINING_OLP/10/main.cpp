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

    int a, b, c; 
    cin >> a >> b >> c;
    cout << (a % c + b % c) % c << ' ' << (a % c - b % c + c) % c << ' ' << (a % c * b % c) % c;
    return 0;     
}