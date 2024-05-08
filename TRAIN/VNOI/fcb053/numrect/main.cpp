#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--){
		int a, b;
		cin >> a >> b;
		cout << (a + 1)*a*(b + 1)*b/4 << endl;
	}
	return 0;
}
