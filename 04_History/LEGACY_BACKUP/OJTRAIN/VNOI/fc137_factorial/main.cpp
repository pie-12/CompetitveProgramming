#include <bits/stdc++.h>
#define int long long
using namespace std;

string s;
int sum = 0;
int k;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s >> k;
        for (int i = 0; i < (int)s.size(); i++){
        sum += s[i] - '0';
        }

        if (k == 1){
            cout << "YES\n";
        }
        else if (k == 2){
            if (!(((s[s.size()-1]) - '0') % 2)) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            if (!(((s[s.size()-1]) - '0') % 2) && !(sum % 3)) cout << "YES\n";
            else cout << "NO\n";
        }

    sum = 0;

    }
    return 0;
}
