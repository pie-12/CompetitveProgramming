#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> a;

int main()
{
    freopen("bai3.inp", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i){
        string q; cin >> q;
        a.push_back(q);
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < a[i].size(); ++j)
            a[i][j] = toupper(a[i][j]);

    for (int i = 0; i < n; ++i)
        cout << a[i] << '\n';
    return 0;
}
