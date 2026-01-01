//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll power(int a, int b)
{
    ll ans = 1;
    for(int i = 1; i <= b; i++) ans *= a;
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int cnt = 0;
        int k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
        for(int n = 0; r2 >= l1 * power(k, n); n++){
            ll p = power(k, n);
            int xmin = max(l1, int((l2-1)/p+1));
            int xmax = min(r1, int(r2/p));
            cnt+=max(0,(xmax - xmin) + 1);
        }
        cout << cnt << '\n';
    }
    return 0;
}