#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
int n;
int check(vector<int> a, int cnt, int sum) {
    if (cnt == a.size()) {
        return sum;
    }
    int first = check(a, cnt + 1, __gcd(sum, a[cnt]));
    int second = check(a, cnt + 1, sum);
    return first + second;
}
signed main() {
    //io
    fast;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> a;
        for(int i = 0; i <n;i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cout << check(a,0,0) << endl;
    }
    return 0;
}