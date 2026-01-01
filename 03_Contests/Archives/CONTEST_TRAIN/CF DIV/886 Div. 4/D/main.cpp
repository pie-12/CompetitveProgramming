//pie12
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast
    
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    
    int diff[n - 1];
    for(int i = 0; i < n - 1; i++){
        diff[i] = a[i + 1] - a[i];
    }
    
    int best_cnt = 0 , cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if (diff[i] <= k) {
            cnt++;
            best_cnt = max(cnt, best_cnt);
        }
        else {
            best_cnt = max(cnt, best_cnt);
            cnt = 0;
        }
    }
    cout << n - best_cnt - 1 << endl;
    }
    return 0; 
}
