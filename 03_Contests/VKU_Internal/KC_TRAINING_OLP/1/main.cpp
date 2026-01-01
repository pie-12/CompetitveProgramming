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
    int best = -LLONG_MAX;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if((int)sqrt(temp) * (int)sqrt(temp) != temp) best = max(best, temp);
    }
    cout << best;
    return 0;     
}