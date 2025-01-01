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

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n < 10){
            cout << 1 << n << endl;
        }
        else{
        string s = "";
        int x = 9;
        while(n > 1 && x > 1){
            if(n % x == 0){
                n /= x;
                s = to_string(x) + s;
            }
            else x--;
        }
        if(n == 1 && s.size() > 1) cout << s << endl;
        else cout << -1 << endl;
        }  
    }
    return 0;     
}