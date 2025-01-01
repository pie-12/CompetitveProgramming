#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    int n;
    int x;
    set<int>s;
    cin >> n;
    for (int i = 0; i < n-1; i++)
        {
            cin >> x;
            s.insert(x);
        }
    for (int i = 1; i <= n; i++)
    if (s.find(i)==s.end()) {cout << i; break;}



    return 0;
}
