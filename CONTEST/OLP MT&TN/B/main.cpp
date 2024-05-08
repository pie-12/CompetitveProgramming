#include <bits/stdc++.h>

using namespace std;
long long a, b;

long long result(long long a, long long b){
    if (a<b){
        return -1;
    }
    if (a==b) return 0;
    if (a>b) return 1;
}
long long const d = 998244353;
signed main (){
    long long sum1 = 0, sum2;
    cin >> a >> b; 

    if(a % b != 0){
    a= a % d;
    b= b % d;

    while (result(a,b)){
        if (result(a,b)==-1){
            sum1 = (sum1 % d + b % d) % d;
            b = (b % d - a % d) % d;
        }
        if (result(a,b)==1){
            sum1 = (sum1 % d + a% d) % d;
            a = (a%d - b%d) % d;
        }
        if (result(a,b)==0){
            sum1 = (sum1 % d + a%d) % d;
            cout << (sum1 % d);
            return 0;
        }
    }
}
    else{
        long long n = a / b;
        a= a % d;
        b= b % d;
        cout << ((n * min(a, b)) % d + ((n * (n - 1)) / 2) % d * min(a, b) % d) % d;
    }


}