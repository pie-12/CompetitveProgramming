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
        int ans;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            if(i == 0) ans = temp;
            else if(temp > ans) ans = temp;
            else{
                ans = ((int)(ans / temp) + 1) * temp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
