#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    map <int,int> mp;
    int n, k;
    cin >> n >> k;
    vector <int> ps(n + 2);
    ps[0] = 0;
    ps[n+1] = 1e10;
    vector <int> a(n + 1);
    vector <int> b(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        ps[i] = ps[i-1]+a[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }

    int ans = 1, sum = 0, t = 0, last = 0 ;
    for (int i = 1; i <= n; i++){
        int j = i + 1;
        if (j == n && !last){
            j--;
            last++;
        }
        mp[b[i]]++;
        while (ps[j]-ps[i-1]<=k){
            mp[b[j]]++;
            j++;
            t = mp.size();
            ans = max(ans, t);
            if (ans == *max_element(b.begin(), b.end())){
        cout << ans;
        return 0;
    }
        }
        t = mp.size();
        ans = max(ans, t);
        mp.clear();
    }
    cout << ans;
    return 0;
}
