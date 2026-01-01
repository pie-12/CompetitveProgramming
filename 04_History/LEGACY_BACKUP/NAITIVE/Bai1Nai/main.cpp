#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    sort(a,a+5);
    int dem = 0;
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            for (int k = j + 1; k < 5; k++)
                if (a[i]+a[j]>a[k])dem++;
    cout << dem;
    return 0;
}
