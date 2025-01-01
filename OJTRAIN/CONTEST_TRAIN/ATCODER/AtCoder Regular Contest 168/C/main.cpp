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

    int n; string s;
    cin >> n >> s;
    
    map<char,int> mp;
    mp[s[0]] = 1;
    int cnt = 1;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) cnt++;
        else{
            mp[s[i - 1]] = max(mp[s[i - 1]] , cnt);
            cnt = 1; 
        }
    }
    mp[s[n - 1]] = max(mp[s[n - 1]], cnt);


    int ans = 0;
    for(auto x: mp){
        ans += x.second;
    }
    cout << ans;
    return 0;     
}