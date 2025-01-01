#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    unsigned long long n;
    cin >> n;
    int dem = 2;
    for (int i = 1; i < n; i ++ )
        if((n-i)%(1+i)==0)dem++;
        if (n==0)cout << 1;
        else cout << dem;
    return 0;
}
