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
    
    string a, b; cin >> a >> b;
    string s = "";
    int k; cin >> k;
    for(int i = 0; i < k; i++){
        s += a;
    }
    if(s == b) cout << "YES";
    else cout << "NO";
    bye
}