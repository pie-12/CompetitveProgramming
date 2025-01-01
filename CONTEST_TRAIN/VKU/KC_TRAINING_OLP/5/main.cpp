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

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int cnt_uoc = 1;
    if((int)sqrt(n) * (int)sqrt(n) == n) cnt_uoc++;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0) cnt_uoc += 2;
    }
    if(n == 1) cnt_uoc = 0;
    cout << !(cnt_uoc % 2) << endl;
    }
    return 0;     
}