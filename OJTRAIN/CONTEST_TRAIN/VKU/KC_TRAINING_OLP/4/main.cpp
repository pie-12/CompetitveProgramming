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

    int n, x;
    cin >> n >> x;
    int low = LLONG_MAX;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(x % temp == 0){
            cout << x;
            return 0;
        }
        int res = (int)(x / temp);
        res++;
        low = min(res * temp, low);
    }
    cout << low;
    return 0;     
}