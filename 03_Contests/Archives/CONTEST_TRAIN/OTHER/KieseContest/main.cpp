#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
	int temp;
	int i = 0;
	int sum1 = 0, sum2 = 0;
	int t;
	while (cin >> temp){
	    if (i == 0){t = temp;}
        if(i % 2 == 0)sum1 += temp;
        else sum2 += temp;
        i++;
	}
	cout << max(sum1, sum2 + t);
	return 0;
}
