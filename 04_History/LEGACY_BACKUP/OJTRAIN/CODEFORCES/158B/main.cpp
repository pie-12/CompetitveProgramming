//pie12
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast

    int n;
    cin >> n;
    map <int,int> mp;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        mp[temp]++;
    }
    int cnt = 0;
    cnt += mp[4];
    cnt += (mp[2] / 2);
    if(mp[2] % 2 == 0) mp[2] = 0;
    else mp[2] = 1;
    if(mp[3] <= mp[1]){
        cnt += mp[3];
        mp[1] -= mp[3];
        mp[3] = 0;
    }
    else{
        cnt += mp[1];
        mp[3] -= mp[1];
        mp[1] = 0;
    }
    if(mp[2] == 1 && mp[1] >= 2){
            cnt++;
            mp[2] = 0;
            mp[1] -= 2;
        }
    if(mp[2] == 1 && mp[1] == 1){
            cnt++;
            mp[2] = 0;
            mp[1] = 0;
        }
    if(mp[1] > 0 && mp[2] == 0 && mp[3] == 0){
        cnt += (mp[1]/4);
        if(mp[1] % 4 != 0) cnt++;
        mp[1] = 0;
    }
    cout << cnt + mp[1] + mp[2] + mp[3];

    return 0; 
}

