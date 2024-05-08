#include <iostream>

using namespace std;
long long lcm(long long a, long long b)
{
    long long tich = a*b;
    if (a==0||b==0)
    {
        return a ;
    }
    while (a!=b)
    {
        if (a>b) a-=b;
        else b-=a;
    }
    return tich/a;
}
int main()
{
    int n ;
    cin >> n;
    long long a[n];
    long long ans ;

    for (long long i = 0; i < n; i++)
        cin >> a[i];
//    ans = lcm(a[0],a[1]);
//    for (long long i = 2; i < n; i++)
//        ans = lcm(ans,a[i]);
    cout << lcm (a[0], a[1]);


    return 0;
}
