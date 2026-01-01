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

    int n, x, q;
    cin >> n >> x >> q;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    vector<int> prefixSum(n + 1);
    prefixSum[0] = 0;

    for (int i = 0; i < n; i++){
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }
    int cnt = 0;
    for(int i = 0 ; i < q; i++){
        int a, b;
        cin >> a >> b;
        if(prefixSum[b] - prefixSum[a - 1] < x) cnt++;
    }
    cout << cnt;
    return 0;     
}