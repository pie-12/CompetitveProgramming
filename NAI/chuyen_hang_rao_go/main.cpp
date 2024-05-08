#include <iostream>
#include <algorithm>
using namespace std;
bool check(long long a[], long long b[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i]>b[i]) return false;
    return true;
}
int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        long long a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort (a,a+n); sort (b,b+n);
        bool ans = check (a,b,n);
        if (ans==true) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
