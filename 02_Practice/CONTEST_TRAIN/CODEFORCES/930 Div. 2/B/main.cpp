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
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        string ss = ""; int pos = -1;
        bool down = false;
        for(int i = 0; i < n; i++){
            if(s1[i + 1] == '1' && s2[i] == '0' && down == false) {down = true; ss += s1[i]; pos = i;}
            if(down == true) ss += s2[i];
            else ss += s1[i];
        }
        if(down == false) {
            ss += s2[n - 1];    
            pos = n - 1;
        }         
        int cnt = 1;                                
        for(int i = pos; i >= 0; i--){
            if(s1[i] == s2[i - 1]) cnt++;
            else break;
        }

        cout << ss << endl << cnt << endl;
    }
    return 0;
}