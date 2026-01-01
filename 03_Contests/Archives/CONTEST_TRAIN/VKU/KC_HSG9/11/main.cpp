//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

int best (int n){
    int best = 0;
    while(n > 0){
        best = max(n % 10, best);
        n /= 10;
    }
    return best;
}
signed main() {
    //io
    fast
    int n;
    cin >> n;
    cout << best(n);    
    return 0;     
}

