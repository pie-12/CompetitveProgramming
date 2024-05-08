#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	/* 
		a * b + c = n
		a * b = n - c
	*/
	vector <int> v(10e6 + 100, 2);
	v[1] = 1;
	int n;
	cin >> n;
	//i, j : a, b
	for(int i = 2; i <= 1000; i++){
		for(int j = i; j <= 1e6/2; j++){
			if(i * j > 1e6) break;
			if(i == j) v[i*j]+=1;
			else v[i*j]+=2;
		}
	}
	int ans = 0;
	//i : c
	for (int i = 1; i < n; i++){
		ans += v[n - i]; 
	}
	cout << ans;
	return 0;
}
