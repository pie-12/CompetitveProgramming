#include <bits/stdc++.h>
#define int long long
using namespace std;
int phi_ham_euler (int n) {
    int res = n;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            res -= res/i;
            while (n % i == 0) n /= i;
        }
    }
    if (n != 1) res -= res / n;
    return res;
}
signed main (){
    int n;
    cin >> n;
    if (n == 1) cout << 0; // de sai
    else
    cout << phi_ham_euler(n);
    return 0;
}
