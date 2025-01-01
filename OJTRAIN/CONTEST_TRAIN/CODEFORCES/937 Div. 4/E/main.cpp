//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define hi signed main()
#define bye return 0;
#define int long long
#define float long double
#define endl '\n'
using namespace std;
hi {
    //io
    fast

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int ch = 1;
        bool ok = false;
        while(ch <= n / 2){
        if(n % ch == 0){
            map <string, int> mp; string ss = "";
            for(int i = 0; i < n; ){
                for(int j = 0; j < ch; j++){
                    ss += s[i];
                    i++; 
                }
                mp[ss] ++; ss = "";
            }
           
            string s1 = "", s2 = "";
            bool picked = false;
            if(mp.size() == 1){
                cout << ch << endl;
                ok = true;
                break;
            }
            for(auto x: mp){          
                if(x.second == n / ch - 1 && mp.size() == 2 && picked == false) {
                    s1 = x.first; 
                    picked = true;
                }
                if(x.second == 1 && mp.size() == 2) s2 = x.first;
            }

            
            if(s1 != "" && s2 != ""){
                int cnt_diff = 0;
                for(int i = 0; i < ch; i++) if(s1[i] != s2[i]) cnt_diff ++;
                if(cnt_diff == 1) ok = true;

                if(ok == true){
                    cout << ch << endl;
                    break;
                }
            }
        }
            ch ++;
        }
        if(ok == false) cout << n << endl;
    }
    bye
}