#include <bits/stdc++.h>
using namespace std;
int phi_ham_euler (int n) {
    int res = n;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            res -= res/i;
            while (n % i == 0) n /= i;
        }
    }
    if (n != 1) res -= res / n; // uoc so nguyen to cuoi cung
    return res;
}
int main (){

    cout << phi_ham_euler(60);
    return 0;
}
