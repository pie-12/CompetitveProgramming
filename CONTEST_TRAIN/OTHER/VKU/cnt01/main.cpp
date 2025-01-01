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
	int a[n];
	map <int, int> mp;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		cout << a[i] <<' '<< mp[a[i]] << endl;
	}
	return 0;
}



