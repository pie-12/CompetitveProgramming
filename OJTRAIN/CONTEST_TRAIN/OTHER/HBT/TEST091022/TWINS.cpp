#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main()
{
    freopen("TWINS.inp","r",stdin);
    freopen("TWINS.out","w",stdout);
    int n, k;
    cin >> n >> k;
    //sang nguyen to
    bool snt[n + 1];
    for (int i = 2; i <= n; i++){
        snt[i] = true;
    }
    snt[1] = false;
    for (int i = 2; i <= n; i++){
        if(snt[i] == true){
            for (int j = 2 * i; j <= n; j += i)
                snt[j] = false;
        }
    }
    //
    int cnt = 0;
    for (int i = 1; i <= n - k; i++)
        if (snt[i] == true && snt[i + k] == true)cnt++;
    cout << cnt;
    return 0;
}
