//DFS
DFS(u){
    visited[u] = true; // mark
    for (v : adj[u]) // duyet
        if(!visited[v]) // check
            DFS(v);
}

void inp(){
    cin >> n >> m;
    vector <int> adj[1001];
    bool visited[1001];
    memset (visited,false,sizeof(visited));
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x); //neu do thi co huong thi khong co dong nay
    }
}
void dfs(int u){
    visited[u] = true;
    for (int v : adj[u]){
        if(!visited[v])
            dfs(v);
    }
}
int main(){
    inp();
    dfs(1);
}

//BFS

int n, m;
vector <int> adj[1001];
bool visited[1001];

void inp(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void bfs(int u){
    //KHOI TAO
    queue<int> q;
    q.push(u);
    visited[u] = true;
    //BUOC LAP
//
    while(!q.emty()){ //LAP
        int v = q.front(); //LAY RA
        q.pop();
        cout << v << " "; //THAM
        for (int x : adj[v])
            if (!visited[x]){
            q.push(x);
            visited[x] = true;
            }
    }
//

}
int main(){
    inp();
    bfs(1);
}

//DEM SO THANH PHAN LIEN THONG CUA DO THI VO HUONG
void inp(){
    int n, m;
    cin >> n >> m;
    vector <int> adj[1001];
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(y);
    }
}
dfs(int u){
    visited[u] = true;
    for (int v: adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
void connectedComponent(){
    int ans = 0;
    memset(visited,false,sizeof(visited));
    for (int i = 1; i <= n; i++){
        if(!visited[i]){
            ans++;
            dfs(i);
        }
    }
    if(ans==1)...//DO THI LIEN THONG
        else...
}
int main(){
    inp();
    connectedComponet();
}
//TIM DUONG DI TREN DO THI KHONG CO TRONG SO
    void dfs(int u){
    visited[u] = true;
    for (int v: adj[u]){
        if(!visited[v]){
            parent[v] = u;
            dfs(v);
        }
    }
}
    void Path(int s, int t){
        vector <int> path;
        //xet tu t
        while(t!=s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        path.reverse(path.begin(),path.end());
        for (auto x: path){
            cout << x << " ";
        }
    }
