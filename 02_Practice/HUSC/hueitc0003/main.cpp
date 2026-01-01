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
    //fast

    map <int,bool> mp;
    for(int i = 1; i <= 10; i++){
        int x = i*i;
        mp[x] = true;
    }
    
    
        int k; cin >> k;
        for(auto x: mp){
            int res = x.first + k;
            if(mp[res] == true) cout << 123 << ' ';
        }

    

    return 0;     
}