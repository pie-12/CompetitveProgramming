//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast

    map <int,bool> mp;
    for(int i = 1; i <= 10; i++){
        mp[i * i] = true;
        mp[- (i * i)] = true;
    }
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        vector <int> v;
        for(auto x: mp){           
            if(x.second == true) if(mp[x.first + k] == true) v.push_back(x.first);
        }
        cout << v.size() << endl;
        for(auto x: v){
            cout << x << ' ';
        }
        cout << endl;
    }

    

    return 0;     
}