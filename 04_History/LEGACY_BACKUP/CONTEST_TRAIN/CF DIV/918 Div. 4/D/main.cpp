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
        string s; cin >> s;
        cout << s[0];
        for(int i = 1; i < n; i++){
            if(s[i + 1] == 'a' || s[i + 1] == 'e') cout << '.';
            cout << s[i];
        }
        cout << endl;
    }   
    return 0;
}