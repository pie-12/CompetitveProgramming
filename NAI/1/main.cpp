 #include <iostream>
 #include <cmath>
 #include <bits/stdc++.h>
using namespace std;
int n;
void Input ()
{
cin.tie(0)->sync_with_stdio(0);
cout.tie(0)->sync_with_stdio(0);
cin >> n;
}
double square_root(int n)
{
if (n == 1) return 1;

return sqrt(n + square_root(n-1));
}
void Solve()
{
cout << fixed << setprecision(3) << square_root(n);
cout << endl << sqrt(3 + sqrt(2 + 1));
}
int main ()
{
    Input();
    Solve();
    return 0;
}
