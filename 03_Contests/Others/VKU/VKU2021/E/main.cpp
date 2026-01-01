#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; 
	cin >> n;
	string s;
	cin >> s;
	string ss = s;
	ss.erase(0,1);
	for(int i = 1; i < n; i++){
		string temp = s;
		temp.erase(i,1);
		if (temp < ss) ss = temp;
	}
	cout << ss;
	return 0;
}



