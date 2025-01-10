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
    int cnt = 0;
    for(int i = 0; i < n; i++){
        //mapie
        if(s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p' && s[i + 3] == 'i' && s[i + 4] == 'e'){
            s[i] = 'z';
            s[i + 1] = 'z';
            s[i + 2] = 'z';
            s[i + 3] = 'z';
            s[i + 4] = 'z';
            cnt++;
        }
        else if(s[i] == 'a' && s[i - 1] == 'm' && s[i + 1] == 'p') cnt++;
        else if(s[i] == 'i' && s[i - 1] == 'p' && s[i + 1] == 'e') cnt++;
    }
    cout << cnt << endl;
}
    return 0;
}