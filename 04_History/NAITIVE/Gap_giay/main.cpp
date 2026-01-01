#include <iostream>
#include <cmath>
using namespace std;
int gap(int a, int b)
{
    int c = 1, i = 1;
    while(1)
    {
        c = a * pow(2,i);
        if (c > b) return i-1;
        i++;
    }

}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = gap(a,b);
    cout << ans;
    return 0;
}
