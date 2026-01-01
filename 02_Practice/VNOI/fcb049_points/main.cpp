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
    vector <bool> check (n, false);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] += k;
    }
    for(int i = 0; i < k; i++){
        int temp; cin >> temp;
        check[temp - 1] = true;
    }
    for(int i = 0; i < n; i++){
        if(check[i] == true) cout << a[i] - 1 << ' ';
        else cout << a[i] << ' ';
    }
    return 0;
}