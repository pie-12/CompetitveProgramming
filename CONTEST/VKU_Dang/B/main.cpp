//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
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
#define int long long
#define float long double
#define endl '\n'
using namespace std;

char grid[1005][1005];
pair <int,int> path[] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
void dfs(int i, int j, int n, int m){
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (grid[i][j] == ',') return;
    if (grid[i][j] == '#'){
        grid[i][j] = ',';
        for (int k = 0; k < 8; k++) {
            int xi = i + path[k].first, yi = j + path[k].second;
            dfs(xi, yi, n, m);
        }
    }
}
HI {
    IO FAST
    int cnt = 0;
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
        	cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            if (grid[i][j] == '#'){
                cnt++;
                dfs(i, j, n, m);
            }
        }

    cout << cnt;
    BYE
}
