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
    for(int i = 0; i < 3*n; i++){
        string s; cin >> s;
        int ch_a = 0, ch_b = 0, ch_c = 0;
        for(int i = 0; i < 3; i++){
            if(s[i] == 'A') ch_a++;
            if(s[i] == 'B') ch_b++;
            if(s[i] == 'C') ch_c++;
        }
        if(ch_a == 0) cout << 'A' << endl;
        if(ch_b == 0) cout << 'B' << endl;
        if(ch_c == 0) cout << 'C' << endl;
    }
    return 0;
}