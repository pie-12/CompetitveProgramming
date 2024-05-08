#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = (n-1)/10;
    n = n + x;
    string s = "";
    for (int i = 0; i <= n; i++)
        s += ((i % 10) + '0');
    cout << s;
    return 0;
}
