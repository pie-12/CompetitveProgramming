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

    //
    int n;
    cin >> n;
    vector <bool> sievie(1e6 + 1, true);
    sievie[0] = false;
    sievie[1] = false;
    for(int i = 2; i <= 1e6; i++)
        if(sievie[i] == true)
        for(int j = i * i; j <= 1e6; j += i)            
                sievie[j] = false;
    vector <int> v;
    for(int i = 2; i <= 1e6; i++)
        if(sievie[i] == true) v.push_back(i);
    //

    int best = 0, count = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        int cnt = 0;
            for(auto x : v){
                if(temp == 1) break;
                while(temp % x == 0){
                    cnt++;
                    temp /= x;
                }
            }
        best = max(cnt, best);
        count += cnt;
        }              
    
    cout << count - best;
    return 0;      
    }
 