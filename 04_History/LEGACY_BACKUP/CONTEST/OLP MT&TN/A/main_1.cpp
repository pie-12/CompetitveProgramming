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
    int mode = 0, sum = 0;
    map <int,int> mp;
    int a[n];
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        a[i] = temp;
        mp[temp]++;
        mode = max(mode, mp[temp]);
        sum += temp;
    }
    float sigma = 0, avg = 0;
    avg = 1.0 * sum / n;
    for(int i = 0; i < n; i++){
        sigma += pow(a[i] - avg, 2);
    }
    sigma = 1.0 * sqrt(sigma / n);
    sort(a, a + n);

    cout << a[n - 1] << endl;
    cout << a[0] << endl;
    cout << fixed << setprecision(6) << avg << endl;
    cout << a[n / 2] << endl;
    for(auto x: mp){
        if(x.second == mode) cout << x.first << endl;
        break;
    }
    cout << fixed << setprecision(6) << sigma;

    return 0;
}
