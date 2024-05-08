//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
int const d = 998244353;

int binpow (int a, int b){
    if (b == 0)
        return 1;
    int x = binpow (a, b / 2);
    if (b % 2 == 1)
        return a * x * x % d;
    else
        return x * x % d;
}

signed main() {
    //io
    fast

    
    int a, b; cin >> a >> b;
    if(a < b) swap(a, b);
    int sum = 0;

    if(a % b != 0){
    while(1){
        if(a < b){
            sum = (sum % d + b % d) % d;
            b = (b % d - a % d) % d;
        }
        if(a > b){
            sum = (sum % d + a % d) % d;
            a = (a % d - b % d) % d;
        }
        if(a == b){
            sum = (sum % d + a % d) % d;
            cout << sum % d;
            return 0;
        }
    }
    
}
    else{
        int n = a / b;
        n = n % d;
        b = b % d;
        cout << ((n * b) % d + ((n * (n - 1)) % d * binpow(2, d - 2) % d) % d * b % d) % d;
    }
    return 0;
}