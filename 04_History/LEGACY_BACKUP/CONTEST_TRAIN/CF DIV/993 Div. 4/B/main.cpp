//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'q') s[i] = 'p';
            else if(s[i] == 'p') s[i] = 'q';
        }
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}