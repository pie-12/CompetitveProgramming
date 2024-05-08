//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define hi signed main()
#define bye return 0;
#define int long long
#define float long double
#define endl '\n'
using namespace std;
hi {
    //io
    fast
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = n - 1;
        int cnt = 0;
        while(i > 0 && a[i] <= a[i - 1]){
            cnt++;
            i--;
        }
        while(i > 0 && a[i] >= a[i - 1]){
            cnt++;
            i--;
        }
        cout << n - cnt - 1 << endl;
    }
    bye
}