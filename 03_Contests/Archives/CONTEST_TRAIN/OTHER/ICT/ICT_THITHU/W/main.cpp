#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int const MOD = 9929;
int binpow (int a, int  b){
    if (b == 0)
        return 1;
    int x = binpow (a, b/2);
    if (b % 2 == 1)
        return a * x * x % MOD;
    else
        return x * x % MOD;
}

int nCk(int n, int k)
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for(int i = 2; i <= k; i++) {
        result *= (n-i+1);
        result = (result * binpow(i, MOD - 2)) % MOD;
    }
    return result;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int red, blue;
	//k : red, r: blue.
	cin >> red >> blue;
    cout << nCk(red+1,blue);
    return 0;
}
