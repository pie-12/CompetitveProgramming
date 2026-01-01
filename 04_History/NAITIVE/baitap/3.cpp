#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    int dem = 0;
    for (; a*2 <= b ; )
    {
        a=a*2; dem+=1;
    }
    cout << dem ;
    return 0;
}

