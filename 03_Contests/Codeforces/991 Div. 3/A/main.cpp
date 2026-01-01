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
    	int n, m; cin >> n >> m;
    	string s;
    	int ans = 0, cnt = 0;
    	for(int i = 0; i < n ; i++){
    		cin >> s;
    		cnt += s.size();
    		if(cnt <= m) ans = i + 1;
    	}
    	cout << ans << '\n';
    }
    return 0;
} 