#include <iostream>
using namespace std;

int gttd(long long a)
{
    if (a >= 0) a = a;
    if (a < 0) a = -a;
    return a;
}
int main()
{

    int n;
    cin >> n;
    long long a[n], dem = 0;
    for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]==1) dem++;
        }
        cout << gttd(2*dem-n);
    return 0;
}
