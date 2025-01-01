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

    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < 5; i++){
            if(s[i] == 'A') cnt++;
        }
        if(cnt >= 3) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}