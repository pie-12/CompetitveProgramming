#include <iostream>
using namespace std;

int main()
{
    int t ; cin >> t;
    long long a,b,d;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b >> d;
        while (a!=b)
        {
            if (a>b)a-=b;
            else b-=a;
        }
        if (d%a==0) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
