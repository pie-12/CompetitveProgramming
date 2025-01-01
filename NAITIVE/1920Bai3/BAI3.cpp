#include <iostream>

using namespace std;

int main()
{
    //freopen ("BAI3.inp","r",stdin);
    //freopen ("BAI3.out","w",stdout);
    string a;
    cin >> a;
    int dem=0;
    if(a[0]!=a[a.length()-1])
    {dem+=1;
    for (int i = 1; i < a.length()-2; i++)
    {
        if (a[i]!=a[i+1]){dem+=1;i++;}
    }
    }
    else
    {
        for (int i = 0; i < a.length()-1; i++)
    {
        if (a[i]!=a[i+1]){dem+=1;i++;}
    }
    }

    cout << dem;


    return 0;
}
