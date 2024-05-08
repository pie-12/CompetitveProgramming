#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int du = 0;
		for (int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			du += (temp % 3);
		}
		if(du % 3 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}



