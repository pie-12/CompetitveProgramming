//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

int binpow (int a, int b){
    if (b == 0)
        return 1;
    int x = binpow (a, b/2);
    if (b % 2 == 1)
        return a * x * x;
    else
        return x * x;
}

signed main() {
    //io
    fast
    int t; cin >> t;
    while(t--){
        int a, b, l; cin >> a >> b >> l;
        if(l % a != 0 && l % b != 0) cout << 1 << endl;
        else{
            set <int> s;
            int i = 0, j = 0;
            for(i = 0; ; i++){
                for(j = 0; ; j++){
                    int mau = binpow(a , i) * binpow(b , j);
                    if(mau > l) break;
                    if(l % mau == 0) s.insert(l / mau);
                }
                j = 0;
                if(binpow(a , i) * binpow(b , j) > l) break;
            }
            cout << s.size() << endl;
        }
    }
    return 0;
}