//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("EQUAL.INP","r",stdin); freopen("EQUAL.OUT","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

bool isBalance(int num, int length) {
    int sum_l = 0, sum_r = 0;
    string strNum = to_string(num);

    if (length % 2 == 0) {
        for (int i = 0; i < length / 2; i++) {
            sum_l += strNum[i] - '0';
        }
        for (int i = length / 2; i < length; i++) {
            sum_r += strNum[i] - '0';
        }
    } else {
        for (int i = 0; i < length / 2; i++) {
            sum_l += strNum[i] - '0';
        }
        for (int i = length / 2 + 1; i < length; i++) {
            sum_r += strNum[i] - '0';
        }
    }
    return sum_l == sum_r;
}
signed main() {
    io
    fast
    
    int n;
    cin >> n;
    string s = to_string(n);
    int num = pow(10, s.size() - 1);
    while (!isBalance(num, s.size()) || num <= n) {
        num++;
    }
    cout << num;
    return 0;
}