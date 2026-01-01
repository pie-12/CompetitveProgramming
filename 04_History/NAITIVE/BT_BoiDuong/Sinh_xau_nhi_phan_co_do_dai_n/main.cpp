#include <bits/stdc++.h>
using namespace std;
int n, ok = 0;
void sinh(int a[])
{
    int i = n - 1 ;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (a[i]==0) a[i] = 1;
    if (i == -1) ok = 1;


}
int main()
{

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    while (!ok)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << '\n';

        sinh(a);
    }

    return 0;
}
