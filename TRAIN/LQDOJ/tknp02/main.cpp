#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vector <int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	while(k--){
		int temp;
		cin >> temp;
		auto it = upper_bound(a.begin(), a.end(), temp);
		cout << it - a.begin() << endl;
	}
	return 0;
}



