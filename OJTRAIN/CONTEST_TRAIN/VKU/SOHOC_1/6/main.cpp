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
    set <int> s;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            s.insert(i);
            s.insert(n / i);
        }
    }
    int sum = 0;
    for(auto x: s)
        sum += x;
    if(n * 2 == sum) cout << "YES";
    else cout << "NO";

    return 0;  

}