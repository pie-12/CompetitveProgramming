#include <bits/stdc++.h>

using namespace std;
int timkiemnhiphan(int a[], int x, int n)
{
    int left = 0;
    int right = n-1;


    while (left <= right)
        {int mid = (left +right)/2;
        if (a[mid]==x) return mid;
        if (x>a[mid]) {left = mid + 1;}
        else right = mid -1;
        }
    return -1;

}
int main()
{
    int n ; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int kq  ;
    int x = 11;
    kq = timkiemnhiphan(a,x,n);
    cout << kq;


    return 0;
}
