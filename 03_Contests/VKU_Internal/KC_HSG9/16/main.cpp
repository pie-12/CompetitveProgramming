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
    vector <bool> sievie(1e8 + 1001, true);
    sievie[0] = false;
    sievie[1] = false;
    for(int i = 2; i <= 1e8 + 1000; i++)
        if(sievie[i] == true)
        for(int j = i * i; j <= 1e8 + 1000; j += i)            
                sievie[j] = false;  

    for(int i = 2; i <= 1e8 + 1000; i++)
        if(i > n && sievie[i] == true){
            cout << i;
            return 0;
        }
    return 0;     
}