//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

signed main() {
    io
    fast

    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        a[i] = temp;
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k - 1] && a[i] > 0) cnt++;
    }
    cout << cnt;
    return 0;
}