#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long m ;
    cin >> m;
    long long n;
    long long vt=0;
    long long su=0;
    long long temp;

    while (su<m)
        {su+=(long long)pow(2,vt);
        vt++;}
    n = vt - 2;

            long long sum = 0;
            for (long long i = 0; i<=n;i++)
                sum+=(i*(long long)pow(2,i))/2 + (long long)pow(2,i);



    long long sans = 0;
    long long vitri1=(long long)pow(2,(n+1))-(su-m);
    long long thuong ;
    long long du ;
    long long sochiadu;
    for (long long i = 1; i <= n+1; i++)
    {
        sochiadu = (long long)pow(2,i);
        thuong = vitri1/(long long)(pow(2,i));
        sans+=thuong*((long long)pow(2,i-1));
        du = vitri1%sochiadu;
        if (du>((long long)pow(2,i-1)))sans+=du-(long long)pow(2,i-1);
        thuong = 0;
        du = 0;
    }
        if (m==1)cout<<"1";
        else cout <<  sum + sans + vitri1;



    return 0;
}
