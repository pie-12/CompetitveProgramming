#include <bits/stdc++.h>
using namespace std;

#define tasks "vmunch"
#define sync_in_out ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, m;
int u, v, s, t;
char a[10001][10001];
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, -1, 0};
int d[1001][1001];
void bfs(int i, int j){
    //KHOI TAO
    queue <pair<int,int>> q;
    q.push({i,j});
    a[i][j] = '*';
    d[i][j] = 0;
    //LAP
    while(!q.empty()){
    pair<int,int>top = q.front();
    q.pop();
    for (int k = 0; k < 4; k++){
        int i1 = top.first + dx[k];
        int j1 = top.second + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]!='*'){
            if(a[i1][j1]=='C')return;
            d[i1][j1] = d[top.first][top.second] + 1;
            q.push({i1,j1});
            a[i1][j1] = '*';
            }
        }
    }
}

signed main()
{
    sync_in_out
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'C') u = i, v = j;
            if (a[i][j] == 'B') s = i, s = j;
        }
    }
    bfs(s, t);
    cout << d[u][v];
    return 0;
}
