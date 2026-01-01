#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<int> x(n), y(n);
    for (auto &i : x) {
        cin >> i;
    }
    for (auto &i : y) {
        cin >> i;
    }
    int ans = -10;
    for (int mask = 0; mask < (1 << n); mask++) {
        int max_y = INT_MIN, min_x = INT_MAX;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                max_y = max(max_y, y[i]);
                min_x = min(min_x, x[i]);
            }
        }
        if (max_y <= min_x) ans = max(ans, __builtin_popcount(mask));
    }
    cout << ans << '\n';
}
