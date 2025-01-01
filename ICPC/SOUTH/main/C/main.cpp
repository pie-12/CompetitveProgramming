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

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int bsearch(int n, int arr[], int target)
{
	int l = 1, r = n - 1;
	while(l <= r)
	{
		int mid = l + (l + r) / 2;
		if(arr[mid] == target) return mid;
		else if(arr[mid] < l)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}	
	}
	return -1;
}

int calc_step(int n, vector<pair<int,int>> v[], int target[])
{
	int step = 0;
	// vector<pair<int,int>> v_temp = v;
	for(int i = 0; i < n; i++)
	{
		// int saojidg = v.fi;
		if(v[5][0].fi == target[i]) continue;
		// int target_idx = bsearch(n, init, target[i]);
		// swap(init[i], init[target_idx]);
		++ step;

		
	}

	return step;
}

int main()
{  
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast

    int n; cin >> n;
    int cost[n], init[n], target[n];
    for(int i = 0; i < n; i++) cin >> cost[i];
    for(int i = 0; i < n; i++) cin >> init[i];
    for(int i = 0; i < n; i++) cin >> target[i];

    vector<pair<int,int>> v;
	for (int i = 0; i < n; ++i) v.pb({init[i], i});
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i) cout << v[i].fi << ' ' << v[i].se << endl;





    
    time
    return 0;
}