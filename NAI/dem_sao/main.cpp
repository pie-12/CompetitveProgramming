#include <bits/stdc++.h>
using namespace std;
long long solve(long long a , long long b)
{
    long long m400;
    m400 = (b-a)/400 +1;
    long long m100;
    m100 = (b-a)/100+1;
    long long m4;
    m4 = (b-a)/4+1;
    long long ans ;
    ans = m4 - m100 + m400;
    return ans;
}
int main()
{
    int n; cin >> n;
    long long a,b,temp;
    while (n--)
    {
        int dem = 0;
        cin >> a >> b;
        temp = b - a;
        if (temp < 4)
            {
                for (int i = a; i <= b; i++)
                if (i%4==0&&i%100!=0||i%400==0) dem++;
                cout << dem << '\n';
            }
        else
        {
        dem = dem + solve (a,b);
        cout << dem << '\n';
        }
    }
    return 0;
}
