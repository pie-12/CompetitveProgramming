#include <bits/stdc++.h>
#define int long long
#define endl '\n'
const int d = 1e9+7;
using namespace std;
int binpow (int a, int b){
if (b == 0) return 1;
int t = binpow(a,b/2)%d;
if (b % 2 == 1) return a * t % d * t % d;
else return t * t % d;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> a(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        a[i] = i;
    }
    int x = n*(n+1)/2;
    if (x % 2 == 1){cout << 0; return 0;}
    vector <int> dp (x/2 + 1, 0);
    dp[0]=1;
    int z = 1;
    for (int i = 1; i <= n; i++){
        for (int j = x/2 ; j >= a[i]; j--){
            dp[j]=(dp[j]+dp[j-a[i]])%d;
        }
    }
    int ans = (dp[x/2] * binpow(2,d-2))%d;
    cout << ans;
    return 0;
}
