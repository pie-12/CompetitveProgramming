#include <bits/stdc++.h>

using namespace std;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    srand(time(NULL));
    int n;
    cin >> n;
    string s ="";
    for (int i = 0; i < n; i++){
	int res = rand();
	if (res % 2 == 0)s+='a';
	else s+='b';
    }
    cout << s;





	return 0;
}
