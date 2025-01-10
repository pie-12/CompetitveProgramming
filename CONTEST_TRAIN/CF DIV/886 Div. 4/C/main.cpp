//pie12
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast
    
    int n;
    cin >> n;
    while (n--){
    string s1, s2, s3, s4, s5, s6, s7, s8;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
    for(int i = 0 ; i < 8; i++){
        bool ans = false;
        if(s1[i] != '.') {cout << s1[i]; ans = true;}
        if(s2[i] != '.') {cout << s2[i]; ans = true;}
        if(s3[i] != '.') {cout << s3[i]; ans = true;}
        if(s4[i] != '.') {cout << s4[i]; ans = true;}
        if(s5[i] != '.') {cout << s5[i]; ans = true;}
        if(s6[i] != '.') {cout << s6[i]; ans = true;}
        if(s7[i] != '.') {cout << s7[i]; ans = true;}
        if(s8[i] != '.') {cout << s8[i]; ans = true;}
        if(ans == true) cout << endl;
    }
}
    return 0; 
}