#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int k;
    cin >> k;
    for (int i = 0; i<n ; i++)
    {
        cin >> a[i];
    }
    int dem=n;
    for (int i =0 ; i<n ; i++){
        a[i]=a[i]%k;
    }
    sort (a,a+n);
    for (int i = 0; i < n; i++)
    if (a[i]==a[i+1]){dem--;}
    cout << dem;
    return 0;
}
