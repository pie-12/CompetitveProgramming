#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q, l, r;
    cin >> n >> q;
    char s[n+5];
    for (int i = 1; i <= n; i++){
        cin >> s[i];
    }
    vector <int> dp(n + 10);
    vector <int> ct0(n + 10);
    vector <int> ct1(n + 10);
    while (q--){
    cin >> l >> r;
    int cnt0 = 0, cnt1 = 0;
    for (int i = l; i <= r; i++){
        if (cnt0 == 0 && s[i] == ')') cnt1++;
        else if (cnt0 > 0 && s[i] == ')')cnt0--;
        else if (s[i] == '(')cnt0++;
        dp[i] = cnt0 + cnt1;
        ct0[i]= cnt0;
        ct1[i]= cnt1;
    }

    int ans = dp[r] - dp[l] + 1;
    if (r == l || (s[l] != '(' && s[r] != ')'))cout << "NO" << endl;
    else if ((r-l+1)%2 == 1 )cout << "NO" << endl;
    else (ans == 0 && ct0[r] - ct0[l] + 1 == 0 && ct1[r]-ct1[l] == 0)? cout << "YES" << endl : cout << "NO" << endl;
    dp.clear();
    ct0.clear();
    ct1.clear();
    }
return 0;
}
