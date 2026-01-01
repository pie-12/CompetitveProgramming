#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[100][100];

signed main()
{
//    freopen("SUM.inp", "r", stdin);
//    freopen("SUM.out", "w", stdout);

    int n;
    int sum = 0;
    int ans = 0;
    cin >> n;

    for (int x = 1; x <= n; x++)
        for (int y = 1; y <= n; y++)
            cin >> a[x][y];

    for(int x = 1; x <= n; x++)
        {
            int x0 = x;
            for (int y = 1; y <= n - x0 + 1; y++)
                {
                    sum += a[x][y];
                    x++;
                }
            x = x0;
            ans = max(ans,sum);
            sum = 0;
        }

    for(int y = 2; y <= n; y++)
        {
            int y0 = y;
            for (int x = 1; x <= n - y0 + 1; x++)
                {
                    sum += a[x][y];
                    y++;
                }
            y = y0;
            ans = max(ans,sum);
            sum = 0;
        }

    cout << ans;
    return 0;
}
