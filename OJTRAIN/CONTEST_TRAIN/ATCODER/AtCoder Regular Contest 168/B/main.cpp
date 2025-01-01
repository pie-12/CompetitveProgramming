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

    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i ++){
        cin >> a[i];
    }
    sort(a,a + n);
    int best = a[n - 1];
    for(int i = 0; i < n; i++){
        if(a[i] == best) a[i] = 0;
    }
    sort(a,a + n);
    cout << a[n - 1];

    return 0;     
}