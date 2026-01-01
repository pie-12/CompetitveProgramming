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
        int ans = 0;
        bool isSquare = true;
        for(int j = 0; j < n; j++){
            string s; cin >> s;
            int cnt = 0;
            for(int i = 0; i < n; i++) if(s[i] == '1') cnt++;
            if(cnt == 1) isSquare = false;
        }   
        if(isSquare == true) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;
    }
    return 0;
}

