#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1005], b[1005], n;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 0; i < n; i++)
        cin >> a[i];
	for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    int i = 0; j = n - 1;
    while (i < n || j > -1){
        if(j == -1 || i < n )
    }
	return 0;
}
