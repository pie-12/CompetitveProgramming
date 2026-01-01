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
    vector<int> prime = {2, 3, 5, 7, 11, 13};
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &i : a) {
        ll x; cin >> x;
        for (int j = 0; j < 6; j++) {
            int cnt = 0;
            while (x % prime[j] == 0) {
                x /= prime[j];
                cnt ^= 1;
            }
            i ^= (cnt << j);
        }
    }
    int ans = 0;
    for (int mask = 1; mask < (1 << n); mask++) {
        int mul = 0;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                mul ^= a[i];
            }
        }
        if (mul == 0) {
            ans++;
        }
    }
    cout << ans << '\n';
}
