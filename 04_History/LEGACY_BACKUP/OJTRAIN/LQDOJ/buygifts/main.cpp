#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a , a + n, greater <int> ());
	int diff = LLONG_MAX;
	for(int i = 0; i + m <= n; i++){
		diff = min(diff , a[i] - a[i + m - 1]);
	}
	cout << diff;

	return 0;
}