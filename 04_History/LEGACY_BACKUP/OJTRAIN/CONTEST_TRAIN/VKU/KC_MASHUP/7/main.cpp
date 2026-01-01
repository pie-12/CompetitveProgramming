//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
int d = 1e9 + 7;
signed main() {
    //io
    fast

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = -1;

    for(int i = 0; i < n; i++){
        {
            string s;
            cin >> s;
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0 && s[j] == '.') a[i][j] = 1;
                if(i == 0 && j == 0 && s[j] == '*') a[i][j] = 0;

            if(s[j] == '*') a[i][j] = 0;
            if(i == 0 && j > 0 && a[i][j] == -1) a[i][j] = a[i][j - 1];
            if(j == 0 && i > 0 && a[i][j] == -1) a[i][j] = a[i - 1][j];
            }

        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[i][j] != 0) a[i][j] = a[i - 1][j] + a[i][j - 1] % d;
        }
    }

    cout << a[n - 1][n - 1] % d;
    return 0;     
}