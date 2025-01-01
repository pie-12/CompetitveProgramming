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

int main()
{  
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast

    int t; cin >> t;
    for(int test = 1; test <= t; test++)
    {
    	bool sus = false;
    	map<int,int> mp;
    	int n, m; cin >> n >> m;
    	for(int i = 0; i < n; i++)
    	{
    		int t1, t2; cin >> t1 >> t2;
    		if(mp[t1] * mp[t2] == 1) {sus = true; break;}
    		else
    		{
    			if(mp[t1] == 0 && mp[t2] == 0) {mp[t1] = 1; mp[t2] = -1;}
    			else
    			{
    				if(mp[t1] != 0) mp[t2] = (-1)*mp[t1];
    				else if(mp[t2] != 0) mp[t1] = (-1)*mp[t2];
    			}
    		}
    	}
    	if(sus == false) cout << "Scenario #" << test << ":" << endl << "No suspicious bugs found!" << endl;
    	if(sus == true) cout << "Scenario #" << test << ":" << endl << "Suspicious bugs found!" << endl;
    }
    
    time
    return 0;
}