#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[10005], n;
vector <pair<int,int>> v;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort (a, a + n);
    v.push_back({1,a[0]});
    int x = 0;
    for (int i = 1; i < n; i++){
        if (a[i]==a[i-1])v[x].first++;
        else {
            v.push_back({1,a[i]});
            x++;
        }
    }
    sort(v.begin(),v.end(), greater<pair<int,int>>());
    int k = v[0].first;
    int ans;
    for (auto x: v){
        if(x.first == k) ans = x.second;
    }
    cout << ans;

    return 0;
}
