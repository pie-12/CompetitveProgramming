#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m, k;
	cin >> n >> m >> k;
	int a[n + 5], b[m + 5];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	int count = 0;
	for (int i = 0, j = 0; j < m && i < n; ){
		if(b[j] >= a[i] - k && b[j] <= a[i] + k){
			count ++;
			j++; i++;
		}
		else if (a[i] + k <= b[j]) i++;
		else if (a[i] - k >= b[j]) j++;
	
	}
	cout << count;
	return 0;
}
