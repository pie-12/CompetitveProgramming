#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> a (n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int x = sum;
    vector <bool> dp (x+1, false);
    dp[0]=1;
    for (int i = 0; i < n; i++)
        for (int j = x; j >= a[i]; j--)
            if (dp[j-a[i]] == true) dp[j] = true;
    int cnt = 0;
    for (auto x : dp){
        if (x == true) cnt++;
    }
    cout << cnt-1 << endl;
    for (int i = 1; i < x + 1; i++)
        if (dp[i]==true)cout << i << " ";
	return 0;
}
