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

    map<char,int> mp;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    int le = 0;
    for(auto x: mp){
        if(x.second % 2 == 1) le++;
    }
    if(le <= 1) cout << 0;
    else cout << le - 1;
    return 0;     
}