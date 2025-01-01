#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	double sum = 0, low = DBL_MAX;
	for(int i = 0; i < n; i++){
		double temp;
		cin >> temp;
		low = min(temp, low);
		sum += temp;
	}
	double ans = sum + (double)(10.0 - low)*1.0;
	cout << ans;
	return 0;
}



