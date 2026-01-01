//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("FUNCT.INP","r",stdin); freopen("FUNCT.OUT","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

signed main() {
    io
    fast
    
    int n, x, m;
    cin >> n >> x >> m;
    for(int i = 0; i < n; i++){
        x = (2*x + 1) % m;
    }
    cout << x;
    return 0;
}