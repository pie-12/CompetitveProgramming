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
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
  

int main()
{  
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast
	int t; cin >> t;
	while(t--)
	{
		ll n, sum = 0, ans = -1; cin >> n;
		vector <int> a(n);

		for(int i = 0; i < n; i++) {
			cin >> a[i]; 
			sum += a[i];
		}
		sort(all(a));
		
		ll lo = 0, hi = 1e18;
		if(n != 1 && n != 2) 
		while(lo <= hi)
		{
			ll x = lo + (hi - lo) / 2;
			double robin = (1.0*(sum + x) / (2 * n));
			auto it = lower_bound(all(a), robin);
			ll idx = (it - a.begin());
			
			if(idx  > floor(1.0 * n / 2)){
				ans = x;
				hi = x - 1;
			}
			else lo = x + 1;	
		}
		cout << ans << endl;
	}
    time
    return 0;
}