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

    multimap <int,int> mp;
    int n, c;
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mp.insert({a,b});
    }
    int cnt = 0;
    for(auto x: mp){
        if(c >= x.first){
            c += x.second;
            cnt++;
        }
        else break;

    }
    cout << cnt;
    return 0;     
}