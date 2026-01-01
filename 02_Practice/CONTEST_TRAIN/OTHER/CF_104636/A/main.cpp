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
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 0;
	for(int i = 1; i < n - 1; i++){
		if(a[i] > a[0] && a[i] < a[n - 1]) cnt++;
	}
	cout << cnt;
	
	return 0; 
}