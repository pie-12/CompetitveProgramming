#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x; long long n;
    cin >> x >> n;
    int a = x;
    for (int i = 1; i<n ;i++ )
    {
        x = x * a;
    }
    cout << x%1000;
    return 0;
}
