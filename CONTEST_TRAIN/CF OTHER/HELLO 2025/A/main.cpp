//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
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
        int a, b; cin >> a >> b;
        cout << max(a,b) + 1 << '\n';
    }
    return 0;
}