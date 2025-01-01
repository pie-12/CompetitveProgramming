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
    for (int l = 0; l < n; l++)
    for (int r = l; r < n; r++) {
        long long sum = 0;
        map<int, int> cnt;
        for (int i = l; i <= r; i++) {
            sum += t[i];
            cnt[a[i]]++;
        }
        if (sum <= k) {
            ans = max(ans, (int) cnt.size());
        }
    }
    cout << ans << '\n';
}
