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
    	int n, a, b; cin >> n >> a >> b;
    	if(abs(a - b) == 1) cout << "NO\n";
    	else {
	    	if(abs(b - a) % 2 == 0) cout << "YES\n";
	    	else cout << "NO\n";
    	}
    }
    return 0;
}