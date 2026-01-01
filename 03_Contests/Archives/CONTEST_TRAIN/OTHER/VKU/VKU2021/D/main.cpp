#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, a, b;
	cin >> n;
	if ((int)sqrt(n) * (int)sqrt(n) == n){
		cout << sqrt(n) << ' ' << sqrt(n);
		return 0;
	}
	else a = sqrt(n) + 1, b = sqrt(n) + 1;
	while (a * b > n){
		a--;
	}
	if (a * b < n) a++;
	
	while (a * b > n){
		a--;
		b++;
	}
	if (a * b < n){
		a++;
		b--;
	}
	cout << a << ' ' << b;
	return 0;
}



