#include <bits/stdc++.h>
#define HI  signed main()
#define ll long long
#define ld long double
#define endl '\n'
using namespace std;
#ifndef ONLINE_JUDGE
#define IO \
freopen("main.inp","r",stdin); \
freopen("main.out","w",stdout);
#else
#define IO
#endif
#define FAST \
ios::sync_with_stdio(false); \
cin.tie(nullptr);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define BYE \
cerr <<"Time elapsed: " << TIME << " s\n"; \
return 0;
ll const MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool bfs_check(const vector<ll>& S, ll k) {
    unordered_set<ll> S_set(S.begin(), S.end());
    unordered_set<ll> gcd_set;
    queue<ll> q;
    
    for (ll num : S) {
        q.push(num);
        gcd_set.insert(num);
    }

    while (!q.empty()) {
        ll num = q.front();
        q.pop();

        if (num == k) {
            return true;
        }

        for (ll s : S) {
            ll new_gcd = gcd(num, s);
            if (gcd_set.find(new_gcd) == gcd_set.end()) {
                if (S_set.find(new_gcd) != S_set.end()) {
                    q.push(new_gcd);
                    gcd_set.insert(new_gcd);
                }
            }
        }
    }

    return false;
}

HI {
    IO FAST

    ll n, k; 
    cin >> n >> k;
    vector<ll> S(n);
    
    for(int i = 0; i < n; i++) {
        cin >> S[i];
    }

    if (bfs_check(S, k)) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    BYE
}
