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

    int n;
    cin >> n;
    int a[n];
    map <int,bool> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]] = true;
    }
    sort(a, a + n);
    int best = -1e9, cnt = 0;
    for(int i = 0; i < n - 1; i++)
        for(int j = n - 1; j > i; j--){
            if(a[i + 1] * 2 - a[i] > a[j]) break;
            if((a[i] + a[j]) % 2 == 0 && mp[(a[i] + a[j]) / 2] == true){
                cnt ++;
                int temp = a[i] + a[j] + (a[i] + a[j])/ 2;
                best = max(best, temp);
            }
        }
    cout << cnt << endl << best;
    return 0;     
}