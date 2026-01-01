//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast;
    int n; cin >> n;
    int dem = 1;
    while (n > dem * (dem + 1) / 2)
    {
        n -= dem * (dem + 1) / 2;
        dem++;
    }
    long long sum = 0;
    long long temp = 1, cs = 1;
    while (cs < dem)
    {
        temp = temp * 10 + 1;
        cs++;
    }
    sum += temp;
    temp = 1;
    cs = 1;
    while (n > cs)
    {
        n -= cs;
        cs++;
    }
    int temp2 = cs;
    while(temp2 - 1)
    {
        temp = temp * 10 + 1;
        temp2--;
    }
    sum += temp;
    temp = 1;
    while(n - 1)
    {
        temp = temp * 10 + 1;
        n--;
    }
    sum += temp;
    cout << sum;
    return 0;
}