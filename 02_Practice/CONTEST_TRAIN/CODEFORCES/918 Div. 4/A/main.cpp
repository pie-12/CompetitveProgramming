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

    int n; cin >> n;
    int temp1, temp2, temp3;
    for(int i = 0; i < n; i++){ 
        cin >> temp1 >> temp2 >> temp3;
        if(temp1 == temp2) cout << temp3 << endl;
        else if(temp1 == temp3) cout << temp2 << endl;
        else cout << temp1 << endl;
    }
    return 0;
}