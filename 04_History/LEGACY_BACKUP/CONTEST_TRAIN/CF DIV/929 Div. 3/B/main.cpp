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
        bool du_1 = false, du_2 = false;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            sum += temp;
            if(temp % 3 == 1) du_1 = true;
            if(temp % 3 == 2) du_2 = true;
        }
        if(sum % 3 == 0) ans = 0;
        else if (sum % 3 == 1 && du_1 == true && du_2 == false) ans = 1;
        else if (sum % 3 == 1 && du_1 == true && du_2 == true) ans = 1;
        else if (sum % 3 == 1 && du_1 == false && du_2 == true) ans = 2;
        else if (sum % 3 == 2 && du_1 == true && du_2 == false) ans = 1;
        else if (sum % 3 == 2 && du_1 == true && du_2 == true) ans = 1;
        else if (sum % 3 == 2 && du_1 == false && du_2 == true) ans = 1;    
        cout << ans << endl;
    }
    return 0;
}