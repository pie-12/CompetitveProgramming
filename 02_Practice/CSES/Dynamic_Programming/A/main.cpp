//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
#define int long long
#define float long double
#define endl '\n'
using namespace std;
#ifndef ONLINE_JUDGE
#define IO \
freopen("main.inp","r",stdin); \
freopen("main.out","w",stdout);
#else
#define IO
#endif
#define FAST \
ios::sync_with_stdio(false); \
cin.tie(nullptr);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define BYE \
cerr <<"Time elapsed: " << TIME << " s\n"; \
return 0;
#define maxn 200000

int n, q, a[maxn], f[maxn][22], g[maxn][22];
int get_min(int l, int r){
	int k = log2(r-l+1);
	return min(f[l][k], f[r - (1 << k) + 1][k]);
}

HI {
    IO FAST
	
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> a[i], f[i][0] = g[i][0] = a[i];
	}
	for(int j = 1; (1 << j) <= n; j++)
	{
		for(int i = 1; i + (1 << j) - 1 <= n; i++)
		{
			f[i][j] = min(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
			g[i][j] = max(g[i][j - 1], g[i + (1 << (j - 1))][j - 1]);

		}
	}

	while(q--){
		int l, r;
		cin >> l >> r;
		cout <<get_min(l, r) << endl;
	}
    
    BYE
}
  