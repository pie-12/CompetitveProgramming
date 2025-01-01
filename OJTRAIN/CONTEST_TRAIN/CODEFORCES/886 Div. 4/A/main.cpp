
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
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        multiset <int> s;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        int sum = 0;
        auto x = s.begin();
        x++;
        sum += *x;
        x++;
        sum += *x;
        if (sum >= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0; 
}