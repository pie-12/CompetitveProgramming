//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    ll a[n][m];
    bool go[n][m];
    memset(go, false, n*m);
    string s; cin >> s;
    for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)cin >> a[i][j];   
    for(int index = 0, i = 0, j = 0; index <= s.size(); index++){
        go[i][j] = true;
        if(s[index]=='R') ++j;
        if(s[index]=='D') ++i;
    }

    ll row[n];
    for(int i = 0; i < n; i++){
        row[i] = 0;
        for(int j = 0; j < m; j++)row[i] += a[i][j];
    }
    ll col[m];
    for(int j = 0; j < m; j++){
        col[j] = 0;
        for(int i = 0; i < n; i++)col[j] += a[i][j];
    }

    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        if(i==n-1 && j==m-1)break;
        if(go[i][j]){
            if(go[i][j+1] == true) {a[i][j]=-col[j];}
            else if(go[i+1][j] == true) {a[i][j]=-row[i];}
            row[i]+=a[i][j]; col[j]+=a[i][j];   
        }      
    }
    
    if(go[n-1][m-2] == true) a[n-1][m-1]=-col[m-1];
    else a[n-1][m-1]=-row[n-1];
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<'\n';} 
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t=1; cin>>t; while(t--)solve();
    return 0;
}