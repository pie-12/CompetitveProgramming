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
        int sum = 0;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            sum += temp;
        }
        if((int)sqrt(sum) * (int)sqrt(sum) == sum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}