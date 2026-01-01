//pie12 です
//https://cses.fi/problemset/task/1671/
#include <bits/stdc++.h>
using namespace std;
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
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define Set(A, n) memset(A, n, sizeof(A))

string to_upper(string s) {for(ll i=0;i<(ll)s.size();++i)if(s[i]>='a' && s[i]<='z')s[i]-='a'-'A';return s;}
string to_lower(string s) {for(ll i=0;i<(ll)s.size();++i)if(s[i]>='A' && s[i]<='Z')s[i]+='a'-'A';return s;}
ll gcd(ll a,ll b) {if (b==0) return a; return gcd(b, a%b);}
ll lcm(ll a,ll b) {return a/gcd(a,b)*b;}
ll nCk (ll n, ll k){if(k== 0||n==k)return 1;return nCk(n-1,k)+nCk(n-1,k-1);}
ll factorial(ll n){if(n<=1)return 1;return n*factorial(n-1);}
bool isprime(ll a) {if(a==1)return 0; for(ll i=2;i<=round(sqrt(a));++i) if(a%i==0)return 0; return 1;}
void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}

ll dx[4] = {-1, 1, 0, 0};
ll dy[4] = {0, 0, -1, 1};

/* ll_MAX = 2e9
LLONG_MAX = 9e18 */
const ll MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;


ll n, m;
vector<pair<ll, ll>> adj[MAX_N];

void Dijkstra(ll s){
	//Mang luu khoang cach duong di
	vector<ll> d(1e5 + 5, INF);
	d[s] = 0;
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>> , greater<pair<ll,ll>>> Q;
	//{khoang cach, dinh}
	Q.push({0, s});
	while(!Q.empty()){
		//Chọn ra đỉnh có khoảng cách từ s nhỏ nhất 
		pair<ll, ll> top = Q.top(); Q.pop();
		ll u = top.second;
		ll kc = top.first;
		if(kc > d[u]) continue;
		//Relaxtion : Thông qua đỉnh u đã biết khoảng cách ngắn nhất tính từ S, cập
		//nhật khoảng cách với các đỉnh kề với u
		for(auto it : adj[u]){
			ll v = it.first;
			ll w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				Q.push({d[v], v});
			}
		}
	}
	//d[i]: khoảng cách ngắn nhất từ điểm đầu đến điểm i
	for(ll i = 1; i <= n; i++) cout << d[i] << ' ';
}

int main()
{  
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast

	cin >> n >> m;
	for(ll i = 0; i < m; i++){
		ll x, y, w; cin >> x >> y >> w;
		adj[x].push_back({y, w});
		// adj[y].push_back({x, w});
	}
    Dijkstra(1);

    time
    return 0;
}