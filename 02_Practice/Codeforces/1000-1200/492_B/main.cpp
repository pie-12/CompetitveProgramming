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

    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int gap = 0;
    for(int i = 1; i < n; i++){
        gap = max(gap, a[i] - a[i - 1]);
    }
    float gapp = 1.0 * gap / 2;
    int lo = max(a[0] - 0, k - a[n - 1]);
    if(gapp > lo) cout << fixed << setprecision(10) << gapp << endl;
    else cout << lo << endl;
    return 0;   
}