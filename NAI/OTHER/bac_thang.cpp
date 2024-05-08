#include<bits/stdc++.h>
using namespace std;
int n , cnt = 1 , sum = 0;
void Try(int i)
{
    for(int  j = 1 ;j <=2 ; j++)
    {
        cnt  += j;
        if(cnt == n)
            sum++;
        else if (cnt > n)
            {   cnt -= j;
                return;
            }
        else
            Try(i+1);
        cnt = cnt - j;
    }
}
int main()
{
    cin >> n;
    Try(1);
    cout << sum;
}
