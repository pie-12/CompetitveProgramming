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

    string s;
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++){
        string sc;
        if(s[i] == '9') {
            sc = s.substr(i,2);
            int num = stoll(sc);
            cout << char(num);
            i += 1;
        }
        else if(s[i] == '1'){
            sc = s.substr(i,3);
            int num = stoll(sc);
            cout << char(num);
            i += 2;
        }
    }
    return 0;     
}