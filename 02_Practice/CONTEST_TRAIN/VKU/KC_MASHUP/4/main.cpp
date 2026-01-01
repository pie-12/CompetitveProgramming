//CF: pie12 【=◈︿◈=】 
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

    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;

        int lcm = (a * b) / __gcd(a,b);

        //chat binary
        int lo = 0, hi = LLONG_MAX;
        
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if((mid / a) + (mid / b) - (mid/lcm) == n && (mid % a == 0 || mid % b == 0)){
                cout << mid << endl;
                break;
            } 
            else if ((mid / a) + (mid / b) - (mid/lcm) < n) lo = mid + 1;
            else hi = mid - 1;
        }
    }

    return 0; 
    
}