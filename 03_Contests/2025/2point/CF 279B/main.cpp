//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    int sum = 0, ans = 0, cnt = 0;
    vector<int>a(n); for(auto &x: a) cin >> x;
    for(int i = 0, j = 0; j < n; j++){
    	sum += a[j]; ++cnt;
    	while(sum > m){
    		sum-=a[i++];
    		--cnt;
    	}
    	ans = max(ans,cnt);
    }
    cout << ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t=1; while(t--)solve();
    return 0;
}