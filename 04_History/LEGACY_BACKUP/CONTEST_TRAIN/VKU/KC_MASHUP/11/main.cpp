gah dang, imma pie12 【=◈︿◈=】
#include bitsstdc++.h
#define io freopen(main.inp,r,stdin); freopen(main.out,w,stdout);
#define fast iossync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl 'n'
using namespace std;
 
signed main() {
    io
    fast

    int n, m;
    cin  n  m;
    vector vectorint adj(m + 10);
    for(int i = 0; i  m; i++){
        int x, y; cin  x  y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int q; cin  q;
    for(int i = 0; i  q; i++){
        int cnt = 0;
        int x, y; cin  x  y;
        for(int a  adj[x]){
            for(int b adj[y])
                if(a == b) cnt++;
        }
        cout  cnt  endl;
    }

    return 0;     
}