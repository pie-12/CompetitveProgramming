//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

int tong (int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
signed main() {
    //io
    fast

    int a, b; cin >> a >> b;
    map <int,int> mp;
    for(int i = 1; i <= sqrt(a); i++){
        if(a % i == 0){
            mp[i] = true;
            mp[a / i] = true;
        }
    }    
    set <int> s;
    for(int i = 1; i <= sqrt(b); i++){
        if(b % i == 0){
            if(mp[i] == true) s.insert(i);
            if(mp[b / i] == true) s.insert(b / i);
        }
    }
    int best = 0;
    int ans = 0;
    for(auto x : s){
        if(tong(x) > best) 
        {
            ans = x;
            best = tong(x);
        }
    }
    cout << best;
    return 0;  

}