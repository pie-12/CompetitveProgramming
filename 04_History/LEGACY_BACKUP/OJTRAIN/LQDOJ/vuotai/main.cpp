#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k, best = 0, sum = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		best = max(temp, best);
		sum += temp;
	}
	int ans = max((long long)0, best - k);
	cout << sum - best + ans + 1;
	return 0;
}
 


