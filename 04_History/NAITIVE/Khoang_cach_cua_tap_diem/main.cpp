#include <bits/stdc++.h>
using namespace std;

int main()
{
//    cin.tie(0)->sync_with_stdio(0);
//    cout.tie(0)->sync_with_stdio(0);
//    int n; cin >> n ;
//    int a[n][2];
//    for (int i = 0; i < n ; i++)
//        for (int j = 0; j < 2; j++)
//        cin >> a[i][j];
int sum = 0;
for (int i = 0; i <= 2004; i++)
    sum += i;

long long b = pow(sum,2);
//string s = to_string(b);
//cout << s[s.length()-2] << s[s.length()-1];
cout << b;


    return 0;
}
