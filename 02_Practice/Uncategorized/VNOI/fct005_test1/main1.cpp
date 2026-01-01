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

    int n; cin >> n;
    map <int,int> mp;
    int hi = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        mp[temp]++;
        hi = max (hi, mp[temp]);
    }
    for(auto x: mp){
        if(x.second == hi){
            cout << x.first;
            break;
        }
    }
    return 0;
}