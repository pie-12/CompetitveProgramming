#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    long long m ;
    cin >> m;
    int n;
    long long vt=0;
    long long su=0;
    long long temp;

    while (su<m)
        {su+=pow(2,vt);
        vt++;}
    n = vt - 2;

            int sum = 1;
            int tong = 0;
            int a[n]; a[0]=1;


            for (int  i = 1; i <= n; i++)
            {sum=pow(2,i)+sum+(sum-pow(2,i-1));a[i]=sum;}

            for (int i = 0; i < n; i++)
            tong+=a[i];
            sum+= tong;




    long long sans = 0;
    long long vitri1=pow(2,(n+1))-(su-m);
    long long bit0=0, bit1=0;
    for (int i = 0; i <= n; i++)
    {
        while (bit0+bit1<vitri1)
        {
         for (int j = 1; j <= pow(2,i); j++)
            if (bit0+bit1<vitri1) bit0++;
         for (int k = 1; k <= pow(2,i); k++)
            if (bit0+bit1<vitri1) bit1++;
        }

        sans+=bit1;

        bit0 = 0;bit1=0;
    }
        if (m==1) cout << 1;
        else cout << sum + sans + vitri1;



    return 0;
}
