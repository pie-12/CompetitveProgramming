#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    long long m, n, dai, rong;
    cin >> m >> n;
    if (m>n) {dai = m; rong = n;}
        else {dai = n; rong = m;}
    long long b = dai;
    long double a = -b/(1.0*rong);
    long long sum = 0;
                                        for (long long i = 1; i < rong; i++)
                                            sum+=(1.0*a)*i+b;
    long long ans = dai*rong - 2*sum;
    cout << ans;
    return 0;
}

