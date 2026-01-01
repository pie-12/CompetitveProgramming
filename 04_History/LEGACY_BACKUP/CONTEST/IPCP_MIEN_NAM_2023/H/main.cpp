#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int temp = a;
	vector <int> v;
	for(int i = 1; i <= sqrt(c) ; i++){
		if(c % i == 0) {
			v.push_back(i);
			v.push_back(c/i);
		}
	}
	sort(v.begin(),v.end());
	for(int x: v){
		
		if(x % b != 0 && d % x != 0 && c % x == 0 && x % a == 0) {
			cout << x;
			return 0;
		}		
	}
	cout << -1;		
	return 0; 
}