#include <bits/stdc++.h>
#define int long long
using namespace std;
//so do nhan Ai Cap
int mod(int a, int n, int d)
{

    int r = a % d;
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1) res = (res* r) % d;
        r = (r * r) % d;
        n /= 2 ;
    }
    return res;
}
signed main()
{
    freopen ("DONGDU.inp","r",stdin);
    freopen ("DONGDU.out","w",stdout);
    int n, m, y;
    cin >> n >> m >> y;
    int ans1;
    int cnt = 0;
    for (int i = 0; i <= m - 1; i++)
    {
        ans1 = mod(i,n, m);
        if (ans1 == y)
        {
            cout << i << " ";
            cnt ++;
        }

    }
    if (cnt == 0) cout << -1;

    return 0;
}
