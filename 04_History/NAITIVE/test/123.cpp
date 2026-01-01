#include <iostream>
using namespace std;

int main ()
{
    int n ;
    cin >> n;
    int a[200];
    int sum = 0;
    char x = 'N';
    int y=0;
    for (int i = 0; i<n ; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i<n ; i++)
    {

        if (a[i]==sum/2){x='Y';y=a[i];}

    }
    if (x=='Y') {cout << y;}
    if (x=='N') {cout << x;}


    return 0;
}
