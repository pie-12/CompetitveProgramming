#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define d 1000000007
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x;
	cin >> x;
	if (x <= 6) {
		cout << (pow(2, x - 1));
		return 0;
	}
	vector<int> dp(1000005); 
	for (int i = 1; i <= 6; i++){
		dp[i] = pow(2,i - 1);
	}
	for (int i = 7; i <= 1000000; i++){
		for(int j = 1; j <= 6; j++)
			dp[i] = (dp[i] + dp[i - j]) % d; 
	}
	cout << dp[x] % d;
	return 0;
}



