#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, best = 0, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		best = max(best, temp);
		if(temp < best) ans += (best - temp);
	}
	cout << ans;
	return 0;
}



