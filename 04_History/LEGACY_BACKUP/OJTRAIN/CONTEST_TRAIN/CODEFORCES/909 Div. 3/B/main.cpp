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

    int a[15];
    for(int i = 0; i < 15; i++){
        cin >> a[i];
    }
    sort(a,a + 15);
    cout << a[0] << ' ' << a[14];
    return 0;     
}