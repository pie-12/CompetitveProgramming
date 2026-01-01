#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector<int> t(n), a(n);
    for (auto &i : t) {
        cin >> i;
    }
    for (auto &i : a) {
        cin >> i;
    }
    int ans = 0;
    for (int r = 0; r < n; r++) {
        int l = r;
        ll sum = a[r];
        map<int, int> cnt;
        cnt[t[r]]++;
        while (l > 0 && sum + a[l - 1] <= k) {
            l--;
            sum += a[l - 1];
            cnt[t[l]]++;
        }
        if (sum <= k) {
            ans = max(ans, (int) cnt.size());
        }
    }
    cout << ans << '\n';
}
