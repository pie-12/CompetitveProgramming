#include <bits/stdc++.h>
#define int long long
using namespace std;
int sum = 0;
int n, m, k, temp;
vector <int> v;

signed main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),greater<int>());
    int s = (int)v.size();
    vector<int> prefixSum(s + 1);
    prefixSum[0] = 0;

    for (int i = 0; i < s; i++)
        prefixSum[i + 1] = prefixSum[i] + v[i];

    int ans = -2;
    for (int i = 0; i < n - m + 1;  i++){
        int y = i + m - 1;
        if (v[i] - v[y] <= k){
            ans = (prefixSum[i + m] - prefixSum[i]);
            cout << ans;
            return 0;
        }
    }
    cout << -2;
}
