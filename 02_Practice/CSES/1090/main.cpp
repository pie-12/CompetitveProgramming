#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int ans = 0;
	for (int i = 0, j = n - 1; i <= j ; j--){
		if(a[i] + a[j] <= x) i++;
		ans++;
	}
	cout << ans;
	return 0;
}
