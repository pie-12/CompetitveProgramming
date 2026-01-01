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
    freopen("CHUSO1.inp","r",stdin); freopen("CHUSO1.out","w",stdout);
    fast

    int n;
    cin >> n;
    int cnt = 0;
        while(n >= 5){
                cnt += n / 5;
                n /= 5;
            }    
    cout << cnt;
    return 0;     
}

