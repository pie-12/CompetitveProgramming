#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int p, n;
	cin >> p >> n;
	int sum = 9, num = 0;
	//TH i = 1
	if(9 % p == 0){
		cout << n;
		return 0;
	}
	int last = (9 % p);
	for (int i = 2; i <= 1e6; i++){
		last = (((10 % p) * (last % p)) % p + 9 % p) % p;
		if(last == 0){
			num = i;
			break;
		}
	}	
	if (num == 0){
		cout << 0;
		return 0;
	}
	cout << n / num;	
	return 0;
}



