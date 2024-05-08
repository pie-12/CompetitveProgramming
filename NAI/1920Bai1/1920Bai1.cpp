#include <bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("1920Bai1.inp","r",stdin);
    freopen("1920Bai1.out","w",stdout);

    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 3; i < s.length(); i=i+4)
    s.insert(i,".");
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}
