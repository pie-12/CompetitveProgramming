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

const int MAX_N = 1e5 + 5;
const ll INF = LLONG_MAX;

int main()
{  
    // #ifndef ONLINE_JUDGE
    //     freopen("main.inp","r",stdin);
    //     freopen("main.out","w",stdout);
    // #endif
    fast

    int n, D, H; cin >> n >> D >> H;
    vector<ll> heights(n + 1), dp(n + 1, INF);

    FOR(i, 1, n + 1) cin >> heights[i];
    dp[1] = heights[1];

    FOR(i, 1, n + 1) {
        if (dp[i] == INF) continue;
        ll best = min(i + D, n);
        FOR(j, i + 1, best + 1) {
            ll diff = abs(heights[i] - heights[j]);
            if (diff <= H) {
                dp[j] = min(dp[j], dp[i] + heights[j]);
            }
        }
    }

    ll ans;
    ans = (dp[n] == INF)? -1 : dp[n];
    cout << ans;

    time
    return 0;
}
