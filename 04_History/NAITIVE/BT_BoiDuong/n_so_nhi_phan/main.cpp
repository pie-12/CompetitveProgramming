#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n==0) return 0;
    string s = "";
    string s1 = "";
    for (int i = 0 ; i < n; i++)
    {
        s += '0';
        s1 += '1';
    }
    cout << s << "\n";
    int x = n - 1;
    while (1)
    {
        if (s[n-1] == '0') {s[n-1] = '1'; cout << s << '\n';}
        else
        {
            while (1)
            {
                if (s[x] == '1' && s[x-1] == '0')
                {
                    s[x-1] = '1';
                    for (int i = n-1; i >= x; i--)
                        s[i] = '0';
                    cout << s << '\n';
                    x = n - 1;
                    break;
                }
                x--;
            }
        }
         if (s == s1) break;
    }

    return 0;
}
