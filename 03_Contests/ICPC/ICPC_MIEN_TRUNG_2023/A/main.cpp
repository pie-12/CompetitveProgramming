#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast
	int n;
	cin >> n;
	vector <int> a(n + 100), maxx(n + 100), minn(n + 100), sum(n + 100);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int ans = -LLONG_MAX;
	for(int i = 2; i <= n; i++){
		sum[i] = a[i - 1] + sum[i - 1];
		maxx[i] = max(maxx[i - 1], a[i - 1]);
        minn[i] = min(minn[i - 1], sum[i]);
        ans = max(ans, sum[i] - (minn[i] + maxx[i]));
	}

	cout << ans;
	return 0; 
}