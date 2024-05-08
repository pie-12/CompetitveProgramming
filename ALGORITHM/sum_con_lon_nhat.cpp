#include <bits/stdc++.h>
using namespace std;

int main (){
int n;
cin >> n;
long long a[n];
for (int i = 0; i < n; i++)
    cin >> a[i];
long long best = -1e9, sum = 0;
for (int k = 0; k < n; k++){
    sum = max (a[k], sum + a[k]);
    best = max (best, sum);
}
cout << best ;
return 0;
}
