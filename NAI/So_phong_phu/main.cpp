#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

long double a, res;
int n;

void Input(){
    faster;
    #ifndef ONLINE_JUDGE
    freopen("HUSC.inp", "r", stdin);
    freopen("HUSC.out", "w", stdout);
    #endif
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        res += a;
    }
    res /= n;
}
void Solve(){
    cout << fixed << setprecision(4) << res;
}

int main(){
    Input();
    Solve();
    return 0;
}
