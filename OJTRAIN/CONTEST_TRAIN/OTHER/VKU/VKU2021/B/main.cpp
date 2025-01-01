#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

signed main() {
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int l, r;
	cin >> l >> r;
	while (int(sqrt(l))*int(sqrt(l))!=l){
		l++;
	}
	while (int(sqrt(r))*int(sqrt(r))!=r){
		r--;
	}
	l = sqrt(l);
	r = sqrt(r);
	for (int i = l; i <= r; i++){
		cout << i*i << " ";
	}
	return 0;
}



