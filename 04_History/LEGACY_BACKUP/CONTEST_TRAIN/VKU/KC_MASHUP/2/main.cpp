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

    int n, k;
    cin >> n >> k;
    
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < k; i++){
        int temp;
        cin >> temp;
        auto pos = lower_bound(v.begin(),v.end(), temp);
        cout << pos - v.begin() + 1<< endl;
    }

    return 0;     
}