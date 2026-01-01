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

    string s; cin >> s;
    string ss = "";
    for(int i = 0; i < s.size(); i++){
        if((int)s[i] >= (int)'5' && (int)s[i] <= (int)'9') ss += to_string((int)'9' - (int)s[i]);
           else ss += s[i];
    }
    if(ss[0] == '0') ss[0] = '9';
    cout << ss;
    return 0;
}