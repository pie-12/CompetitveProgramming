#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n, t;
	cin >> m >> n >> t;
	int d = n / (m + 1);
	cout << (n - d) * t;

	return 0;
}



