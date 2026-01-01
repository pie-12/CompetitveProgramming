//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
using namespace std;
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
    	int m, a, b, c; cin >> m >> a >> b >> c;
    	int ans = 0;
    	ans += min(m, a);
    	ans += min(m, b);

    	ans = min(2*m, ans + c);
    	cout << ans << '\n';
    }
    return 0;
}