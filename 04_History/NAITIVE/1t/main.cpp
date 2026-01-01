#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  ll ans = 0;
  vector<ll> cnt(b + 1);
  for (int i = 1; i <= b; i++) {
    for (int j = i * 2; j <= b; j += i) {
      cnt[j] += i;
    }
    cnt[i] = abs(i - cnt[i]);
    if (i >= a && i <= b) ans += cnt[i];
  }
  for (int i = 1; i <=b ; i++)
    cout << cnt[i] << " ";
  return 0;
}
