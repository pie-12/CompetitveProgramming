#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast
	
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		int t1, t2, t3, t4;
		cin >> t1 >> t2 >> t3 >> t4;
		a[i] = t1 + t2 + t3 + t4;
	}
	int tom = a[0];
	sort(a.begin(), a.end(), greater<int> ());
	for(int i = 0 ; i < n; i++){
		if(a[i] == tom){
			cout << i + 1;
			return 0;
		}
	}

	
	
	return 0; 
}