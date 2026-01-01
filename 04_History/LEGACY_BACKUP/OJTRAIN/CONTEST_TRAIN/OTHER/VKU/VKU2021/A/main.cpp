#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int r1 = min(a,b), d1 = max(a,b);
	int r2 = min(c,d), d2 = max(c,d);
	cout << max((r1+r2)*(r1+r2), max(d1,d2)*max(d1,d2));
	return 0;
}



