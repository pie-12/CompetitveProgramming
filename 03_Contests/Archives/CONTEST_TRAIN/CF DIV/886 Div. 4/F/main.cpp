//CF: pie12 【=◈︿◈=】 
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
 
signed main() {
    io
    fast   

    int t;
    cin >> t;
    while (t--){
        map <int,int> mp;
        map <int,int> cnt;
        int n;
        cin >> n;
        int temp = 0, best = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            cnt[x]++;
        }
    
        for(int i = 1; i < n; i++)
            for(int j = i; j < n; j += i){
                mp[j] += cnt[i];
            }
    
        for(auto x : mp){
            best = max(best, x.second);
        }
        cout << best << endl;}
    return 0; 
}
