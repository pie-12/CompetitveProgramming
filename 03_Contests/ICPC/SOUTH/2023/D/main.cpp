//pie12 です
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
#define SET(A, n) memset(A, n, sizeof(A))

string to_upper(string s) {for(int i=0;i<(int)s.size();++i)if(s[i]>='a' && s[i]<='z')s[i]-='a'-'A';return s;}
string to_lower(string s) {for(int i=0;i<(int)s.size();++i)if(s[i]>='A' && s[i]<='Z')s[i]+='a'-'A';return s;}
ll gcd(ll a,ll b) {if (b==0) return a; return gcd(b, a%b);}
ll lcm(ll a,ll b) {return a/gcd(a,b)*b;}
ll nCk (int n, int k){if(k== 0||n==k)return 1;return nCk(n-1,k)+nCk(n-1,k-1);}
ll factorial(ll n){if(n<=1)return 1;return n*factorial(n-1);}
bool is_prime(ll a) {if(a==1)return 0; for(int i=2;i<=round(sqrt(a));++i) if(a%i==0)return 0; return 1;}
void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

/* INT_MAX = 2e9
LLONG_MAX = 9e18 */
const int MAX_N = 500 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int a[MAX_N][MAX_N], w[MAX_N][MAX_N];
vector<pair<int, int>> adj[MAX_N * MAX_N];

ll Dijkstra(int arr[][MAX_N], int n, int g)
{   
    SET(adj, 0);
    int cnt = 1, s = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            w[i][j] = (arr[i][j] < g)? 1 : 0;
            a[i][j] = cnt;
            cnt++;
        }
    }
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int u, v;
            for(int dir = 0; dir < 4; dir++){
                u = i + dx[dir], v = j + dy[dir];
                if(u >= 0 && v >= 0 && u < n && v < n) 
                {
                    adj[a[i][j]].pb({a[u][v], w[i][j]});

                }
            }
        }

    vector<ll> d(MAX_N * MAX_N + 1, INF);
    d[s] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>> , greater<pair<ll,ll>>> Q;
    Q.push({0, s});
    while(!Q.empty())
    {
        pair<ll, ll> top = Q.top(); Q.pop();
        ll u = top.second;
        ll kc = top.first;
        if(kc > d[u]) continue;
        for(auto it : adj[u]){
            ll v = it.first;
            ll ww = it.second;
            if(d[v] > d[u] + ww){
                d[v] = d[u] + ww;
                Q.push({d[v], v});
            }
        }
    }
    return d[n * n];
}

int main()
{  
#ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
#endif
    fast
    

    int casee, n, g = 0; 
    cin >> casee >> n;    
    if(casee == 1) cin >> g;    
    
    int arr[MAX_N][MAX_N];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    if(casee == 1) cout << Dijkstra(arr, n, g);    

    else
    {
        int lo = 1, hi = 5000, res = 1;
            while(lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if(Dijkstra(arr, n, mid)  == 0) {res = mid; lo = mid + 1;}
                else hi = mid - 1;
            }
            cout << res;
    }

    time
    return 0;
}
