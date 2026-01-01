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
        map <int,int> mp;
        int n; cin >> n;
        for(int i = 0; i < n * (n - 1) / 2; i++){
            int temp; cin >> temp;
            mp[temp]++;
        }   
        n--;
        for(auto x: mp){
            while (x.second > 0){
                cout << x.first << ' ';
                x.second -= n;                
                n--;
            }
        }
        cout << (int)1e9 << endl;
    }
    return 0;
}
