//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

int digits (int num){
    int lo = LLONG_MAX, hi = -1;
    while(num > 0){
        int temp = num % 10;
        lo = min(lo, temp);
        hi = max(hi, temp);
        num /= 10;
    }
    return lo * hi;
}

signed main() {
    //io
    fast

    int t; cin >> t;
    while(t--){
        int temp, n; cin >> temp >> n;
        for(int i = 0; i < n - 1; i++){
            if(digits(temp) == 0) break;
            temp += digits(temp);
        }    
        cout << temp << endl;
    }
    return 0;
}