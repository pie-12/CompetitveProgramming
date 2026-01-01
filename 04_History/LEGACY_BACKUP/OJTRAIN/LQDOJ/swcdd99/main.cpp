#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x;
	cin >> x;
	if(x < 10){
		cout << x;
		return 0;
	}
	if(x % 9 != 0)
	cout << x - ((int)(x / 9) * 9);
	for(int i = 1; i <= (int)(x / 9); i++)
		cout << 9;
	return 0;
}



