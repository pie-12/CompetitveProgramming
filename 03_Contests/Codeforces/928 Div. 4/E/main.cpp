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
        int n, k; cin >> n >> k;
        int minus = 0, p = 1;
        while(minus + (n + 1) / 2 < k){
            minus += (n + 1) / 2;
            p *= 2;
            n /= 2;
        }
        cout << p * (2 * (k - minus) - 1) << endl;
    }
    return 0;
}