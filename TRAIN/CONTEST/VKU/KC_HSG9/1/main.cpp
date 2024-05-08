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

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int l = 1, r = 2e9;
        bool ans = false;
        while(l <= r && ans == false){
            int mid = (l + r) / 2;
            if(mid % n + (n - 1) * (mid / n) == k){
                cout << mid << endl;
                ans = true;
            }
            else if(mid % n + (n - 1) * (mid / n) < k) l = mid + 1 ;
            else r = mid - 1;
        }
    }
    return 0;     
}