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

    // LƯU Ý: PHẦN TỬ NÀY KHÔNG NHẤT THIẾT PHẢI MAX
    int n; cin >> n;
    int a[n];
    int sum = 0, best = -LLONG_MAX;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == sum - a[i]){
            cout << a[i];
            return 0;
        }
    }
    cout << 'N';
    return 0;     
}