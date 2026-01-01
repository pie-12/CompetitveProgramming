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

    vector <int> sievie(1e6 + 1, 0);
    for(int i = 1; i <= 1e6; i++){
        for(int j = i; j <= 1e6; j += i)
            sievie[j]++;
    }

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cout << sievie[x] << endl;
    }
    return 0;     
}