#include <iostream>
using namespace std;
long long mod (long long a, long long n)
{
    long long r, res;
    r = a % 10000;
    res = 1;
    while (n > 0)
    {
    if (n % 2 == 1) res = (res * r)%10000;
    r = (r*r)%10000;
    n /= 2;
    }
    return res;

}
int main ()
{
    long long a, n;
    cin >> a >> n;
    int ans = mod (a,n);
    cout << ans;
    return 0;
}

