#include <bits/stdc++.h>
#define d 100000
using namespace std;
int binpow(int a, int b){
if (b == 0) return 1;
int t = binpow(a, b / 2);
if (b % 2 == 1) return a * t * t;
else return t * t;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool mark[100005];
    mark[1] = 1;
    for (int i = 1; i <= d; i++)
        mark[i] = 0;
    for (int i = 2; i * i <= d; i++){
        if (mark[i]==1)i++;
        for (int j = 2; binpow(i,j)<=d; j++){
        mark[binpow(i,j)]=1;
    }
}
    int x;
    cin >> x;
    while (1){
        if (mark[x] == 1) {cout << x; return 0;}
        x--;
    }
    return 0;
}
