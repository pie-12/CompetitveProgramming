#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, sum = 0;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + n, greater <int> ());
	
	for(int i = 0; i < n; i++){
		if((i + 1) % 3 == 0) sum -= a[i];
	}
	cout << sum;
	return 0;
}