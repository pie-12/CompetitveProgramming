#include <bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("bai1.inp","r",stdin);
//    freopen("bai1.out","w",stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string ans;
    ans = (a + b) > (c + d) ? "Yes" : "No";
    cout << ans;
    return 0;
}
