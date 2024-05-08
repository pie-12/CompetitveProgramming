#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<pair<int,int>> points;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        points.push_back({x, 1});
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        points.push_back({x, -1});
    }
    sort(points.begin(), points.end());
    int cnt = 0, ans = 0;
    for (auto &i : points) {
        cnt -= i.second;
        ans = max(ans, cnt);
        // cout << i.first << ' ' << cnt << '\n';
    }
    cout << ans << '\n';
}
