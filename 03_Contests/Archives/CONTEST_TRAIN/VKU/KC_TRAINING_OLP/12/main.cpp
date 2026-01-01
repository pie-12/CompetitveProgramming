//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
 
int best(vector<int>& a, int t) {
    int n = a.size();
    int i = 0, j = 0;
    int sum = 0;
    int best = 0;
    int length = 0;

    while (j < n) {
        sum += a[j];
        length++;

        while (sum > t) {
            sum -= a[i];
            length--;
            i++;
        }

        if (length > best) {
            best = length;
        }

        j++;
    }

    return best;
}

signed main() {
    //io
    fast
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << best(a, k);

    return 0;
}