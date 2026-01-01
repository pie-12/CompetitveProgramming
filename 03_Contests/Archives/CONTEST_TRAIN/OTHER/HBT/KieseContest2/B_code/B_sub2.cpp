#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s = '#' + s;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int cnt = 0; bool ans = true;
        for (int i = l; i <= r; i++) {
            if (s[i] == '(') cnt++;
            else cnt--;
            if (cnt < 0) {
                ans = false;
                break;
            }
        }
        cout << (ans && cnt == 0 ? "YES" : "NO") << '\n';
    }
}
