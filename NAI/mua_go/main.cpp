#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    long long a[7];
    for (int j = 0; j < n; j++)
    {

    for (int i = 0; i < 7; i++)
        cin >> a[i];
        sort(a,a+7);
        if (a[2]==a[1]+a[0])
        {if (a[3]!=a[0]+a[1])
            cout << a[0] << " " << a[1] << " " << a[3] << '\n';
        else cout << a[0] << " " << a[1] << " " << a[2] << '\n';}
        else cout << a[0] << " " << a[1] << " " << a[2] << '\n';

    }

    return 0;
}
