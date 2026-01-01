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
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s.size() > 10){
			cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
		}
		else cout << s << endl;
	}
	return 0; 
}