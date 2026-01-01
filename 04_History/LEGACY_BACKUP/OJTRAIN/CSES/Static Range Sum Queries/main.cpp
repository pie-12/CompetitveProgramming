#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, t;
	cin >> n >> t;
	int a[n + 1], pre[n + 1];
	pre[0] = 0;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		pre[i] = pre[i - 1] + a[i];
	} 
	while (t--){
		int a, b;
		cin >> a >> b;
		cout << pre[b] - pre[a - 1] << endl;
	}

	return 0;
}
