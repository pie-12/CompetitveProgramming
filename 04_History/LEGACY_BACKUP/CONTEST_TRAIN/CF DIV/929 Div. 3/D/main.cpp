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
        int gcd, low = LLONG_MAX;
        map <int,int> mp;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            low = min(temp, low);
            mp[temp]++;
        }
        if(mp[low] == 1) cout << "YES" << endl;
        else if(mp[low] == n) cout << "NO" << endl;
        else{
            bool is_yes = false;
            for(auto x: mp){
                if((x.first != low) && (x.first % low != 0)){
                    is_yes = true;
                }
            }
            if(is_yes == true) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}