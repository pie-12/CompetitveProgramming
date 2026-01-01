#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
   
    int cnt = 0;
    while (x > 0){
        int temp = x;
        int best = -1;
        while (temp != 0){
            best = max(best, temp % 10);
            temp /= 10;
        }
        x -= best;
        cnt ++;
    }
    cout << cnt;
    return 0;
}



