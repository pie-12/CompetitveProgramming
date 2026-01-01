#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[100005], dp[100005];
	a[0] = 0; a[1] = 1; dp[0] = 0; dp[1] = 1;
	int best = 1;
	for (int i = 2; i <= 100005; i++){
		if(i % 2 == 0) a[i] = a[i / 2];
		else a[i] = a[(i - 1) / 2] + a[(i - 1) /2 + 1]; 
		best = max(best, a[i]);
		dp[i] = best;
	}
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		cout << dp[temp] << endl;
	}

	
	return 0;
}



