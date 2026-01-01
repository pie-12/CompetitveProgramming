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

const int MAXN = 105;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
ll bit[MAXN][MAXN][MAXN];
int n;

void update(int x, int y, int z, ll val) {
    for (int i = x; i <= n; ) {
        int step_x = i & -i;
        for (int j = y; j <= n; ) {
            int step_y = j & -j;
            for (int k = z; k <= n; ) {
                int step_z = k & -k;
                bit[i][j][k] += val;
                k += step_z;
            }
            j += step_y;
        }
        i += step_x;
    }
}

ll query(int x, int y, int z) {
    ll sum = 0;
    for (int i = x; i > 0; ) {
        int step_x = i & -i;
        for (int j = y; j > 0; ) {
            int step_y = j & -j;
            for (int k = z; k > 0; ) {
                int step_z = k & -k;
                sum += bit[i][j][k];
                k -= step_z;
            }
            j -= step_y;
        }
        i -= step_x;
    }
    return sum;
}


ll range(int x1, int y1, int z1, int x2, int y2, int z2) {
    ll res = query(x2, y2, z2) - query(x1 - 1, y2, z2) - query(x2, y1 - 1, z2) - query(x2, y2, z1 - 1) + query(x1 - 1, y1 - 1, z2) + query(x1 - 1, y2, z1 - 1) + query(x2, y1 - 1, z1 - 1) - query(x1 - 1, y1 - 1, z1 - 1);
    return res;
}

//Binary Indexed Tree
int main()
{  
    // #ifndef ONLINE_JUDGE
    //     freopen("main.inp","r",stdin);
    //     freopen("main.out","w",stdout);
    // #endif
    fast

    int t;
    cin >> t;

    while (t--) 
    {
        int m;
        cin >> n >> m;

        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= n; ++j)
                for (int k = 0; k <= n; ++k)
                    bit[i][j][k] = 0;

        for (int i = 0; i < m; ++i) {
            string s;
            cin >> s;

            if (s == "UPDATE") {
                int x, y, z;
                ll w;
                cin >> x >> y >> z >> w;

                ll curr = range(x, y, z, x, y, z);
                ll diff = w - curr;

                update(x, y, z, diff);

            } else if (s == "QUERY") {
                int x1, y1, z1, x2, y2, z2;
                cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
                cout << range(x1, y1, z1, x2, y2, z2) << endl;
            }
        }
    }
    
    time
    return 0;
}
