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
	vector <int> L(n,1);
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] > a[j])
				L[i] = max(L[i],L[j] + 1);
		}
	}
	cout << *max_element(L.begin(),L.end());
	return 0; 
}