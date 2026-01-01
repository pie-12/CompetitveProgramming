#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[91];
	int x; cin >> x;
	a[1] = 1; a[2] = 1;
	if (x == 1) {cout << 1; return 0;}
	if (x == 2) {cout << "1 1"; return 0;}
	cout << "1 1 ";
	for(int i = 3; i <= x; i++){
		a[i] = a[i - 1] + a[i - 2];
		cout << a[i] << " ";
	}
	return 0;
}



