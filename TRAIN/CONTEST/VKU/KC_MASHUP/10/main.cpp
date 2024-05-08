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
    fast

    int n, m;
    cin >> n >> m;
    vector <int> v(m , 0);
    vector<int> prefixSum(n + 1);
    prefixSum[0] = 0;
    for (int i = 0; i <= 2e5; i++)
        prefixSum[i + 1] = prefixSum[i] + v[i];

    for(int = 0;)
    return 0;     
}