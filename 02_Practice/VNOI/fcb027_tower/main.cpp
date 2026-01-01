#include <bits/stdc++.h>
#define int long long
using namespace std;
bool check(int x){
    int delta = 1 + 8*x;
    double x1 = (-1+sqrt(delta))/2 *1.0;
    if (ceil(x1)==floor(x1) && x1 > 0)
        if(x1*(x1+1)==2*x)return 1;
    double x2 = (-1-sqrt(delta))/2 *1.0;
    if (ceil(x2)==floor(x2) && x2 > 0)
        if(x2*(x2+2)==2*x)return 1;
        return 0;
}
signed main()
{

//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    freopen("main.inp","r",stdin);
//    freopen("main.out","w",stdout);

    int t;
    cin >> t;
    int x;
    while (t--){
        cin >> x;
        bool ans = check(x);
        (ans == true)? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
