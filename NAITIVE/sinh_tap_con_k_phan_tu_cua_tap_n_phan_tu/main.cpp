#include <bits/stdc++.h>
using namespace std;
int a[1000];

void sinh(int a[],int n, int k, int &ok)
{
    int i = k;
        if (a[i]<(n-k+i)) a[i]++;
        else
        {

            i--;
            while (1)
            {
                if (i == 0) {ok = 1; break;}
                if(a[i]<(n-k+i))
                {

                    a[i]++;
                    for (int y = i+1; y <= k; y++)
                    {
                        a[y]=a[y-1]+1;
                    }
                    break;


                }
                else i--;


            }
        }

}

int main()
{
    int ok = 0;
    int k, n;
    cin >> k >> n;
    for (int i = 1; i <= k; i++)
    {
        a[i]=i;
    }

    while (!ok)
    {
        for (int i = 1; i <= k; i++)
            cout << a[i] ;
        cout << '\n';
        sinh(a,n,k,ok);
    }
    return 0;
}
