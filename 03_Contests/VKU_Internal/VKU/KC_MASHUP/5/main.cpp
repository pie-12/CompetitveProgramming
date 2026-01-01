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

    int n, x;
    cin >> n >> x;
    vector <pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v[i].first = temp;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n;  i++){
        int remain = x - v[i].first;
        for(int j = i + 1, r = n - 1; j < r; j++){
            while(v[j].first + v[r].first > remain) r--;
            if(j < r && v[j].first + v[r].first == remain){
                cout << v[i].second << ' ' << v[j].second << ' ' << v[r].second;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;     
}