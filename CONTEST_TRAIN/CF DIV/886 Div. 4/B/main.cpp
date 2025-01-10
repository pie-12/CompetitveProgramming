//pie12
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a, b;
        map <int,int> mp;
        for(int i = 1; i <= n; i++){
            cin >> a >> b;
            if(a <= 10) mp[i] = b;
        }
        int best = 0;
        for(auto x: mp){
            best = max(best, x.second);
        }
        for(auto x: mp){
            if(x.second == best) cout << x.first << endl;
        }
    }
    
    return 0; 
}