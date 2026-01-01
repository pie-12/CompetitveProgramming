DFS(u){
	//<Tham Dinh u>
	visited[u] = true; //Mark
	for(v : adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}


BFS(u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : ke[v])
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
	}	
}