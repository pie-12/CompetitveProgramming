//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &x : a) cin >> x;
    int sum = 0, pos = 0, lo = INT_MAX;
    for(int i = 0; i < n; i++){
    	sum += a[i];
    	if(i >= k) sum -= a[i - k]; 
    	if(i >= k - 1){
    		if(sum < lo){
    			pos = i - k + 2;
    			lo = sum;
    		}
    	}
    }
    cout << pos;
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