//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
const int bit = 2147483647;
signed main() {
    //io
    fast

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map <int,int> mp;
        int cnt = 0;
        for(int i = 0 ; i < n; i++){
            int temp; cin >> temp;
            mp[temp]++;
        }
        for(auto x: mp){
            if(mp[x.first] > 0 && mp[(x.first ^ bit)] > 0 && mp[x.first] >= mp[(x.first ^ bit)]){
                cnt += mp[(x.first ^ bit)];
                mp[x.first] = x.first - (x.first ^ bit);
                mp[x.first - (x.first ^ bit)] = 0;
            }
        }
        cout << n - cnt << endl;
    }    
    return 0;
}