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
    map <int,int> mp;
    int best = -1e9, low_pos = 1e9;


    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        mp[temp]++ ;

        if(temp < low_pos){
            if(mp[temp] >= best){
                cout << temp << endl;
                best = temp;
                low_pos = temp;
            }
            else cout << low_pos << endl;
        }
        else if(temp == low_pos) cout << low_pos << endl;
        else if(temp > low_pos){
            if(mp[temp] > best){
                cout << temp << endl;
                best = temp;
                low_pos = temp;
            }
            else cout << low_pos << endl;
        }
    }
    return 0;     
}