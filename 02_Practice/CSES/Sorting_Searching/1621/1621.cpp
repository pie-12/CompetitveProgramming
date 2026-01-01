#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("1621.inp","r",stdin);
    //freopen("1621.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, count = 0;
	cin >> n;
	map <int,int> mp;
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if (mp[temp] == 0){
			mp[temp] = 1;
			count ++;
		}		
	}
	cout << count;
	return 0;
}
