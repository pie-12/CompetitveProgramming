#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("bai3.inp","r",stdin);
    //freopen("bai3.out","w",stdout);
    string a, b;
    cin >> a >> b;
    int x = b.find(a);
    (x == -1) ? cout << "No" : cout << "Yes";
    return 0;
}
