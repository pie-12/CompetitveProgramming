#include <iostream>

using namespace std;

int main()
{

    int n ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

    int a[4][2];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    int dem = 0;
        if((a[1][0]-a[0][0])*(a[2][0]-a[1][0])+(a[1][1]-a[0][1])*(a[2][1]-a[1][1])==0) dem++;
        if((a[2][0]-a[1][0])*(a[3][0]-a[2][0])+(a[2][1]-a[1][1])*(a[3][1]-a[2][1])==0) dem++;
        if((a[3][0]-a[2][0])*(a[0][0]-a[3][0])+(a[3][1]-a[2][1])*(a[0][1]-a[3][1])==0) dem++;
        if((a[0][0]-a[3][0])*(a[1][0]-a[0][0])+(a[0][1]-a[3][1])*(a[1][1]-a[0][1])==0) dem++;



    cout << dem << endl;
    }

    return 0;
}
