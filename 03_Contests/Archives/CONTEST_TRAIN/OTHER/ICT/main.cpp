#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector <int> v;
signed main() {
    int t;
    cin >> t;
    int x, y;
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        v.push_back(y - x);
    }
    int best = *max_element(v.begin(),v.end());
    int a[best + 1];
    a[1] = 1;
    a[2] = 1;
    a[3] = 2;
    for (int i = 4; i <= best + 1; i++){
        a[i] = a[i - 3] + a[i - 2] + a[i - 1];
    }
    for (int i = 0; i < v.size(); i++)
        cout << a[v[i] + 1] << endl;
    return 0;
}
