//yo, i'm pie12 (・ω・)ﾉ
//https://oj.vnoi.info/problem/fc082_treecolor
#include <bits/stdc++.h>
#define HI  signed main()
#define ll long long
#define ld long double
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

int const MAXn = 1e6 + 5;
int c[MAXn], ans[MAXn];
vector <int> a[MAXn];
set <int> s[MAXn];

void DFS(int u, int p){
    s[u].insert(c[u]);
    for(int v: a[u]) if(v != p)
    {
        DFS(v, u);
        if(s[u].size() < s[v].size()) swap(s[u], s[v]);
        for(int x: s[v]) s[u].insert(x);
    }
    ans[u] = s[u].size();
}

HI {
    IO FAST
    int n; cin >> n;
    for(int i = 1; i < n; i++)
    {
        int u, v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
        cin >> c[i];
    DFS(1, 0);
    for(int i = 1; i <= n; i++){
        cout << ans[i] << endl;
    }
    BYE
}
