#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int binpow(int a, int b){
    if (b == 0) return 1;
    int t = pow(a,b/2);
    if (b % 2 == 1) return a * t * t;
    else return t * t;
}
signed main() {
//    freopen(".inp","r",stdin);
//    freopen(".out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << binpow(10,12);
	return 0;
}
