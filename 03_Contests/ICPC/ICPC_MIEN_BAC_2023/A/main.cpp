#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
//max fibo = fibo[86]
signed main() {
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int>fibo(100);
	map <int,bool> check_fibo ;
	fibo[0] = 1;
	fibo[1] = 1;
	for(int i = 2; i <= 90; i++){
		fibo[i] = fibo[i - 2] + fibo[i - 1];
		check_fibo[i] = true;
	}
	vector<int>lap(100, 1);
	for(int i = 2; i <= 85; i++){
		for(int j = 86; j > i; j--){
			int temp = fibo[j];
			if(fibo[j] % fibo[i] == 0) {lap[j]++; ;
		}
	}
	
	int x, ans = 0;
	cin >> x;
	int temp = x;
	//lap: cách
	for(int i = 86; i >= 2; i--){
		while(x % fibo[i] == 0 && lap[i] == 1 && x != fibo[i]){
			x /= fibo[i];
			if (ans == 0) ans = 1;
		}
		int cnt = 0;
		while(x % fibo[i] == 0 && lap[i] > 1 && x != fibo[i]){
			if(cnt == 0){
				ans += lap[i];
				cnt++;
			}
			else ans ++;
			x /= fibo[i];
		}
	}
	if(check_fibo[x] == true) ans++;
	cout << ans;
	


	return 0;
}
//check fibo