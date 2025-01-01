//yo, i'm pie12 (・ω・)ﾉ 
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

int n, m;
vector<int>adj[1001];
bool visited[1001];

void INP(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}  
	memset(visited, false, sizeof(visited));
}
void DFS(int u){
	cout << u << ' ';
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]) DFS(v);
	}
}
HI {
    IO FAST
    INP();
    DFS(3);
    BYE
}
