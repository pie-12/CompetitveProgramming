//pie12
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast

    int t;
    cin >> t;
    while(t--){
    long double n, a = 0, b = 0 , c;
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        double temp;
        cin >> temp;
        a += 4;
        b += 4*temp;
        c -= temp*temp;
    }
    c = -c;
    
    long double delta = 1.0*(b*b - 4*a*c);
    
    long double w1 = 1.0*(-b + sqrt(delta))/(2*a);
    long double w2 = 1.0*(-b - sqrt(delta))/(2*a);

    if(w1 >= 0) cout << (int)w1 << endl;
    else cout << (int)w2 << endl;
}
    return 0; 
}