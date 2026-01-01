#include <iostream>
#include <cmath>
using namespace std;
bool check(long long n)
{
    if (n==0||n==1) return false;
    for (long long i = 2; i <= sqrt (n); i++)
        if(n % i ==0) return false;
    return true;
}
int main()
{
    long long t, n;
    cin >> t;

    for (long long i = 1; i <= t; i++)
       {
            cin >> n;


                if (check(n)==1) cout << n << '\n';
                else
            {
                while (!check(n))
                n++;
                cout << n << '\n';
            }
        }



    return 0;
}
