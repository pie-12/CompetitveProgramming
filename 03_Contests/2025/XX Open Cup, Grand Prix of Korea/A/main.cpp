/**
 * author:  pie-12 (◕‿◕)
 * created: 02.11.2025 09:21:36
**/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() 
{
    int rows, cols; cin >> rows >> cols;
    string s[rows][cols]; 
    for(int i = 0; i < rows; i++){
        string ss; cin >> ss;
        for (int j = 0; j < cols; j++)
        {
            s[i][j] = ss[j]; 
        }
    }
    int cnt = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            int r = rows - 1 - i;
            int c = cols - 1 - j;
            if (i > r || (i == r && j > c)) continue;
            char a = s[i][j][0]; 
            char b = s[r][c][0];
            if (i == r && j == c) 
            {
                if (a == '6' || a == '9' || a == '7') 
                {
                    cout << -1 << '\n';
                    return;
                }
            } 
            else 
            {
                if (a == '8')
                {
                    if (b != '8')
                    {
                        cout << -1 << '\n'; return;
                    }
                } 
                else if (a == '7')
                {
                    if (b != '7')
                    {
                        cout << -1 << '\n'; return;
                    }
                    cnt++; 
                }
                else if (a == '6'){
                    if (b == '6') cnt++;
                    else if (b == '7' || b == '8'){
                        cout << -1 << '\n'; 
                        return;
                    }
                }
                else if (a == '9') {
                    if (b == '9') cnt++;
                    else if (b == '7' || b == '8'){
                        cout << -1 << '\n'; 
                        return;
                    }
                }
            }
        }
    }

    cout << cnt << '\n';
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    while (t--) solve();
    cerr << "Built at: "<< __DATE__ <<" " << __TIME__;
    return 0;
}