#include <iostream>
#define d 10
using namespace std;

long long mod(long long a, long long b)
{
    long long r , res;
    r = a % d;
    res = 1;
    while (b > 0)
    {
        if (b % 2 == 1) res = (res * r) % d;
        r = (r * r) % d;
        b /= 2;
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
