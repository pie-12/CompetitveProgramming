//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    bool go[n][m];
    memset(go, false, n*m);
    string s; cin >> s;
    for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)cin >> a[i][j];   
    for(int index = 0, i = 0, j = 0; index <= s.size(); index++){
        go[i][j] = true;
        if(s[index]=='R') ++j;
        if(s[index]=='D') ++i;
    }

    int row[n], xrow[n];
    for(int i = 0; i < n; i++){
        row[i] = 0, xrow[i] = 0;
        for(int j = 0; j < m; j++){
            if(go[i][j]==true)xrow[i]++;
            row[i] += a[i][j];}
    }
    int col[m], xcol[m];
    for(int j = 0; j < m; j++){
        col[j] = 0, xcol[j] = 0;
        for(int i = 0; i < n; i++){
            if(go[i][j]==true)xcol[j]++;
            col[j] += a[i][j];
        }
    }

    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(go[i][j]==true)a[i][j]=(col[j]-row[i])/(xrow[i]-xcol[j]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout << a[i][j] << ' ';
        cout << '\n';
    }
    for(int i=0;i<n;i++)cerr<<xrow[i]; cerr <<'\n';
    for(int i=0;i<m;i++)cerr<<xcol[i]; cerr <<'\n';
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t=1; while(t--)solve();
    return 0;
}