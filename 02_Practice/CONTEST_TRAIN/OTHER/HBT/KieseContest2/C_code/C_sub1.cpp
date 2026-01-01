#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool pfSqr(ll n) {
    ll k = sqrt(n);
    for (ll i = k - 2; i <= k + 2; i++) {
        if (i * i == n) return true;
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    int ans = 0;
    for (int mask = 1; mask < (1 << n); mask++) {
        ll mul = 1;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                mul *= a[i];
            }
        }
        if (pfSqr(mul)) {
            // for (int i = 0; i < n; i++) {
            //     if ((mask >> i) & 1) {
            //         cout << a[i] << ' ';
            //     }
            // }
            // cout << mul << '\n';
            ans++;
        }
    }
    cout << ans << '\n';
}
