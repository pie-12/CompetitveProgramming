#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	int a[n], sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	a[0] = LONG_LONG_MAX;
	sort(a, a + n);
	int cnt = 0;
	for(int i = 0; i < (n - k - 1); i++){
		sum = sum - 2 * a[i];
	}
	cout << sum;
	return 0;


}

