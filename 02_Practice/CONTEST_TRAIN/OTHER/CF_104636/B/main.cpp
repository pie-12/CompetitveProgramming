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
	int a[n];
	set <int> s;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	for(int i = n - 1; i >= 0; i--){
		s.erase(a[i]);
		if(s.size() == 0){
			cout << a[i];
			return 0;
		}
	}
	return 0; 
}