#include <bits/stdc++.h>
#define int long long
using namespace std;

vector <pair<int,int>> d;
vector <pair<int,int>> v;
vector <pair<int,int>> ans;
int n, m;

signed main()
{
    cin >> n >> m;
    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        d.push_back({temp,i});
    }
    sort(d.begin(),d.end(), greater<pair<int,int>>());

    for (int i = 1; i <= m; i++){
        cin >> temp;
        v.push_back({temp,i});
    }
    sort(v.begin(),v.end());

    int total = 0;
    for (int i = 0; i < n; i++){
        total += d[i].first*v[i].first;
        ans.push_back({d[i].second,v[i].second});
    }
    sort(ans.begin(),ans.end());

    cout << total << '\n';
    for (int i = 0; i < n; i++){
        cout << ans[i].second << " ";
    }
    return 0;
}
