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
	string ans = (n % 2 || n == 2) ? "NO" : "YES" ;
	cout << ans;
	return 0; 
}