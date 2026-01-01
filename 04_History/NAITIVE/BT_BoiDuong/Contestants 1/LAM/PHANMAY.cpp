#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PHANMAY.inp", "r", stdin);
    freopen("PHANMAY.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        {cin >> a[i]; a[i]++;}
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int>v;
    int cnt = 0;
    int ans[m];
    for (int i = 0; i < n ; i++)
        ans[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int y = 0; y < m; y++)
        {
            if (b[y]!=0)
            if (a[i] <= b[y])
            {
                cnt++;
                b[y] = 0;
                ans[y]=y+1;
                break;
            }
        }
    }
    cout << cnt << endl;

    for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
    return 0;
}
