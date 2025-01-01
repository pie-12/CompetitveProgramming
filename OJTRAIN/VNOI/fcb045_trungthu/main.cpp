#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[105];
    int re = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        m -= a[i];
        re = min (re, a[i]);
    }
    cout << n + m / re;
    return 0;
}
