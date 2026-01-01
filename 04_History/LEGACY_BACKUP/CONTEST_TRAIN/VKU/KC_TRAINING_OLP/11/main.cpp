//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("CAU1.inp","r",stdin); freopen("CAU1.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
 
signed main() {
    
    fast

    int a, b, c; 
    cin >> a >> b >> c;
    int ans = 1;
    for(int i = a; i <= b; i++){
    	ans = (ans % c * i % c) % c;
    }
    cout << ans;
    return 0;     
} 