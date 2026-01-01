//pie12 です
//https://oj.vnoi.info/problem/vmunch
#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
#define ll long long
#define ull unsigned long long
#define ld long double
#define endl '\n'
#define PI 3.1415926535897932384626433832795
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define pb push_back
#define fi first
#define se second
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define time cerr << "Time run: " << (1000 * clock() / CLOCKS_PER_SEC) << " ms\n";
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define F0R(i, a) for(int i = 0; i < a; i++)
#define Set(A, n) memset(A, n, sizeof(A))

string to_upper(string s) {for(int i=0;i<(int)s.size();++i)if(s[i]>='a' && s[i]<='z')s[i]-='a'-'A';return s;}
string to_lower(string s) {for(int i=0;i<(int)s.size();++i)if(s[i]>='A' && s[i]<='Z')s[i]+='a'-'A';return s;}
ll gcd(ll a,ll b) {if (b==0) return a; return gcd(b, a%b);}
ll lcm(ll a,ll b) {return a/gcd(a,b)*b;}
ll nCk (int n, int k){if(k== 0||n==k)return 1;return nCk(n-1,k)+nCk(n-1,k-1);}
ll factorial(ll n){if(n<=1)return 1;return n*factorial(n-1);}
bool isprime(ll a) {if(a==1)return 0; for(int i=2;i<=round(sqrt(a));++i) if(a%i==0)return 0; return 1;}
void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

struct Graph {
    Graph(int _n) : n(_n), g(n) {}

    void add_edge(int u, int v, bool bi_directional = false) {
        g[u].push_back(v);
        if (bi_directional) g[v].push_back(u);
    }

    // return
    // - shortest distance from start -> target
    // - path
    // If no path -> returns -1
    pair<int, vector<int>> bfs(int start, int target) const {
        assert(0 <= start && start < n);
        assert(0 <= target && target < n);

        auto [dist, trace] = _bfs({start}, target);
        if (dist[target] < 0) {
            return {dist[target], {}};
        }
        vector<int> path;
        for (int u = target; u != start; u = trace[u]) {
            path.push_back(u);
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
        return {dist[target], path};
    }

    // return: dist: vector<int>, dist[u] = shortest distance from start -> u
    vector<int> bfs(int start) const {
        assert(0 <= start && start < n);
        return _bfs({start}, -1).first;
    }

    // multi-source BFS
    // Return: dist[u] = shortest distance from any source -> u
    vector<int> bfs(vector<int> starts) const {
        return _bfs(starts, -1).first;
    }

// private:

    // Start BFS from start, and stop when reaching target.
    // Target = -1 -> BFS whole graph
    // Returns {distance, trace}
    pair<vector<int>, vector<int>> _bfs(vector<int> starts, int target) const {
        assert(-1 <= target && target < n);

        queue<int> qu;
        vector<int> dist(g.size(), -1);
        vector<int> trace(g.size(), -1);

        for (int start : starts) {
            assert(0 <= start && start < n);
            dist[start] = 0;
            qu.push(start);
        }

        while (!qu.empty()) {
            auto u = qu.front(); qu.pop();
            if (u == target) {
                break;
            }

            for (const auto& v : g[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    trace[v] = u;
                    qu.push(v);
                }
            }
        }

        return {dist, trace};
    }

    int n;
    vector<vector<int>> g;
};
int r, c; 
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


bool isValid(int x, int y){
    if(x < 0 || y < 0 || x >= r || y >= c) return false;
    return true;
}
int main()
{  
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast

    cin >> r >> c;
    Graph graph(r * c);
    int a[r][c];

    int count = 0;
    int start, target;
    for(int i = 0; i < r; i++){
        string s; cin >> s;
        for(int j = 0; j < c; j++){
            if(s[j] == 'B') start = count;
            if(s[j] == 'C') target = count;
            if(s[j] == '*') a[i][j] = -1;
            else a[i][j] = count;
            count ++;
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            int u, v;
            for(int dir = 0; dir < 4; dir++){
                if(a[i][j] != - 1)
                {
                    u = i + dx[dir], v = j + dy[dir];
                    if(a[u][v] == -1) continue;
                    if(isValid(u, v)) graph.add_edge(a[i][j] , a[u][v]);
                }
            }
        }
    }
    auto [dis, path] = graph.bfs(start, target);
    cout << dis;
    
    time
    return 0;
}