//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t; cin >> t;
	while(t--)
	{
		int a, b; cin >> a >> b;
		int ans = INT_MAX;
		for(int i = a; i <= b; i++){
			ans = min(ans, i - a + b - i);
		}
		cout << ans << endl;
	}
    return 0;
}