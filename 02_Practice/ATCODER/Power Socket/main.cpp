#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int each, require, socket  = 0, count = 0;
	cin >>  each >> require;
	if (require == 1){cout << 0; return 0;}
	while(socket  < require){
		socket  += each;
		count ++;
		if (require > socket){
			socket--;
		}
		else if (require == socket){
			break;
		}
		else {
			break;
		}
	}
	cout << count;
	return 0;
}
