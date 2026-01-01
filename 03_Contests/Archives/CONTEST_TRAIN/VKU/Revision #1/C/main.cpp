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
    
    map <string,int> mp;
    mp["AE"] = 1;
    mp["EA"] = 1;
    mp["AB"] = 1;
    mp["BA"] = 1;
    mp["ED"] = 1;
    mp["DE"] = 1;
    mp["BC"] = 1;
    mp["CB"] = 1;
    mp["CD"] = 1;
    mp["DC"] = 1;

    string s1, s2; cin >> s1 >> s2;
    if(mp[s1] == mp[s2]) cout << "Yes";
    else cout << "No";

    return 0;
}