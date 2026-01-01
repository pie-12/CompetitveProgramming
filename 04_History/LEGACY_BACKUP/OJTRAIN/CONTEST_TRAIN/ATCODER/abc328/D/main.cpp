//CF: pie12 【=◈︿◈=】 
#pragma GCC optimize("O3,unroll-loops")
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

    string s;
    cin >> s;
    while(s.find("ABC") != string::npos){
        s.erase(s.find("ABC"),3);
    }
    cout << s;
    return 0; 
    
}