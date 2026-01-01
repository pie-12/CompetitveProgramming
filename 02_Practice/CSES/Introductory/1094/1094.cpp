#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("1094.inp","r",stdin);
    //freopen("1094.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int count = 0;
	for (int i = 1; i < n; i++){
		if(a[i] < a[i - 1]){
			count += (a[i - 1] - a[i]);
			a[i] = a[i - 1];		
		}
	}
	cout << count;
	
	return 0;
}
