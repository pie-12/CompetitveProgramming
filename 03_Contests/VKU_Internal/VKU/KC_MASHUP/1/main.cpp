//CF: pie12 【=◈︿◈=】 
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

    int n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ') {
            char c = s[i];
            if((int)(c) + n%26 <= (int)'Z') c = (char)((int)s[i] + n%26);
            else  c = (char)((int)('A') + ((n % 26) - (int)('Z' - s[i] + 1)));
            cout << c;
        }
        else cout << ' ';
    }
    return 0; 
}