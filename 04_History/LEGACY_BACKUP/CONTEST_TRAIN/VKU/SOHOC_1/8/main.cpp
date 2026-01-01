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

    vector <bool> sievie(1e4 + 100, true);
      for(int i = 2; i <= 1e4; i++){
        if(sievie[i] == true)
            for(int j = i*i; j <= 1e4; j += i)
                sievie[j] = false; 
    }
    set <int> s;
    for(int i = 2; i <= 1e4; i++){
        if(sievie[i] == true) s.insert(i);
    }
    int n; cin >> n;
    int a[n];
    int best = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        a[i] = temp;
        if(temp > 1e4){
            bool check_snt = true;
            for(auto x: s) if(temp % x == 0) check_snt = false;

            if(check_snt == true) best = max(best, temp);
        }
        if(temp <= 1e4){
            if(sievie[temp] == true) best = max(best, temp);
        }
    }
    cout << best << endl;
    for(int i = 0; i < n; i++){
        if(a[i] == best) cout << i + 1 << ' ';
    }
    return 0;  

}