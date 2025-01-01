#include <iostream>
#define d 100
using namespace std;

long long mod(long long a, long long n)
{
    long long r , res;
    r = a % d;
    res = 1;
    while (n > 0)
    {
        if (n % 2 == 1) res = (res * r) % d;
        r = (r * r) % d;
        n /= 2;
    }
    return res;

}
int main()
{
    long long a, b;
    cin >> a >> b;
    long long ans = mod (a , b);
    cout << ans;
    return 0;
}
