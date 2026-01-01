//gah dang, imma pie12 【=◈︿◈=】
//lay y tuong tu ngai` tourist
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
    int n, m, x; cin >> n >> m >> x;
    vector <bool> dp(n + 1, false);
    dp[x] = true;
    for(int i = 1; i <= m; i++){
        int r; cin >> r;
        char c; cin >> c;
        vector <bool> sub_dp(n + 1, false);
        for(int j = 1; j <= n; j++){
            if(dp[j] == true){
                if(c == '0' || c == '?')
                    sub_dp[(r + j - 1) % n + 1] = true;
                if(c == '1' || c == '?')
                    sub_dp[(n + j - r - 1) % n + 1] = true;
            }

        }
        swap(dp, sub_dp);
    }

    vector <int> ans;
    for(int i = 1; i <= n; i++){
        if(dp[i] == true) ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
    }

    return 0;
}