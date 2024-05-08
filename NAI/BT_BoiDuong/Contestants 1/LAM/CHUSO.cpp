#include <bits/stdc++.h>
using namespace std;
long long power (long long a, long long b)
{
    if (b == 0) return 1;

    return a*power(a , b-1);
}
int main()
{
    freopen("CHUSO.inp", "r", stdin);
    freopen("CHUSO.out", "w", stdout);

    string s;
    cin >> s;
    string ss = s;
    reverse(ss.begin(),ss.end());
    s += ss ;
    long long n, m;


    cin >> n >> m;

    long long t = n * power(2,n);

    if (m > t)
    cout << -1;
    else
    {
        m--;
        int a = m % (s.size());
        cout << s[a];
    }
    return 0;
}
// Lần sau đọc test kỹ hơn
