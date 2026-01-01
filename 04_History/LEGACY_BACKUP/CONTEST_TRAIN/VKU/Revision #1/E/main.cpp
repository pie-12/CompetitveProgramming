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
    char a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = '0';
    a[(n) / 2][(n)/ 2] = 'T';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    for(int num = 1; i < n * n; i++){
        for(int i = 0; i < n; i++)
    }

    return 0;
}

