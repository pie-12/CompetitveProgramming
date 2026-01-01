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

    int n, m, a;
    cin >> n >> m >> a;
    int ans_m, ans_n;
    if(n % a == 0) ans_n = n / a;
    else ans_n = n / a + 1;
    if(m % a == 0) ans_m = m / a;
    else ans_m = m / a + 1;
    cout << ans_n * ans_m;       
    return 0;
}