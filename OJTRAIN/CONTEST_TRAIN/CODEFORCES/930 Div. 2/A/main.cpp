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
        int p = 1;
        while (p * 2 <= n){
            p *= 2;
        }
        cout << p << endl;
    }
    return 0;
}