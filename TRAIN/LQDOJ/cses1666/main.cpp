#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

int n, m;
vector <int> adj[1000005];
vector <bool> visited(1000005,false);
vector <int> v;

void dfs(int u){
	visited[u] = true;
	for(int x : adj[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}

int count_tplt (){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i);
			v.push_back(i);
			ans++;			
		}
	}
	return ans;
}

signed main() {
    //io
    fast
    cin >> n >> m;
    for (int i = 0; i < m; i++){
    	int x, y;
    	cin >> x >> y;
    	adj[x].push_back(y);
    	adj[y].push_back(x);
    }

    cout << count_tplt() - 1 << endl;
    for(int i = 1; i < v.size(); i++){
    	cout << v[i - 1] << ' ' << v[i] << endl;
    }
	return 0; 
}