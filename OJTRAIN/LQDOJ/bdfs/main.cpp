#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

int n, m;
vector <int> adj[100005];

vector <bool> visited(100005, false);

void inp(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);

	}
}
void dfs(int u){
	visited[u] = true;
	for(int x: adj[u]){
		if(!visited[x]) dfs(x);		
	}
}

int so_tplt(){
	int cnt = 0;

	return cnt;
}
signed main() {
    //io
    fast
	
	
	
	return 0; 
}