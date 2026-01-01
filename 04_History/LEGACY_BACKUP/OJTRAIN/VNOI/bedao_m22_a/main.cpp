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

    vector <float> ans(11,0);
    int a[5][11];

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 11; j++)
            cin >> a[i][j];

    for (int j1 = 0; j1 < 11; j1++)
    for (int j2 = 0; j2 < 11; j2++)
    for (int j3 = 0; j3 < 11; j3++)
    for (int j4 = 0; j4 < 11; j4++)
    for (int j5 = 0; j5 < 11; j5++) {
       int d = ceil(1.0 * (j1 + j2 + j3 + j4 + j5) / 5);
        float p = 1.0*(a[0][j1] * a[1][j2] * a[2][j3] * a[3][j4] * a[4][j5]) / 1e10;
        ans[d] += p;
    }

    for (int i = 0; i < 11; i++)
        cout << fixed << setprecision(10) << ans[i] * 100 << " ";
        
    return 0;
}