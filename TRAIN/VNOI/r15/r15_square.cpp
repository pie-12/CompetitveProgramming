#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
//   freopen("r15_square.inp","r",stdin);
//    freopen("r15_square.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//1 + 3 + ... + (2n-1) = n^2
	int n;
	cin >> n;
	for (int i = 0, u = 1; i < n; i++, u+=2){
		cout << u << ' ';
	}

	return 0;
}
