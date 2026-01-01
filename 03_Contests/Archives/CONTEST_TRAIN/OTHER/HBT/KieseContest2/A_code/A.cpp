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
    long long sum = 0;
    map<int, int> cnt;    
    for (int l = 0, r = 0; r < n; r++) {
        sum += t[r];
        cnt[a[r]]++;
        while (sum > k) {
            sum -= t[l];
            cnt[a[l]]--;
            if (cnt[a[l]] == 0) {
                cnt.erase(a[l]);
            }
            l++;
        }
        if (ans < (int) cnt.size()) {
            cout << ans << ' ' << l << ' ' << r << '\n';
        }
        ans = max(ans, (int) cnt.size());
    }
    cout << ans << '\n';
}
