#include <bits/stdc++.h>
#define int long long
using namespace std;



int binpow(int a, int b){
    if (b == 0) return 1;
    int t = binpow(a , b / 2);
    if (b % 2 == 1) return a * t * t;
    else return t * t;
}
signed main()
{
//    int t;
//    cin >> t
//    while (t--)
//        {
//
//        }
    cout << binpow(2,3);
    return 0;
}
