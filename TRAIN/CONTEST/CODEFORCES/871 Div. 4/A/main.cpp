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
    
    string ss = "codeforces";
    int n; cin >> n;
    while(n--){
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ss[i]) cnt++;
    }   
    cout << cnt << endl;
}
    
    bye
}