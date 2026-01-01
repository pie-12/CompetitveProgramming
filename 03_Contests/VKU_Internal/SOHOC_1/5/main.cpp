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
    bool check_snt = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) check_snt = false;
    }
    if(n == 2) check_snt = true;
    if(n < 2) check_snt = false;
    if (check_snt == true) cout << "YES";
    else cout << "NO";
    return 0;  

}