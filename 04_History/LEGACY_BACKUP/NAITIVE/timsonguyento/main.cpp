#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;                                  //khoi tao bien dem
for (int i = 0; i < n ; i++)
    if (a[i] >= 2)
{
    {
        for(int j = 2; j <= sqrt(a[i]); j++)        //bien j chay tu 2 -> can a[i]
        if(a[i] % j == 0)count++;                   //neu a[i] chia het cho j thi bien dem + 1
        if (count==0) cout << a[i] << " ";          //neu bien dem = 0 thi chung to no la so nguyen to -> in ra
        count = 0;                                  //dat lai bien dem = 0
    }
}
    return 0;
}
