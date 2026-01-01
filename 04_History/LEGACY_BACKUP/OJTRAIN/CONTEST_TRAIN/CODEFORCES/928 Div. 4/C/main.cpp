//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

int sum (int n){
    int sum = 0;    
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
signed main() {
    //io
    fast

    vector<int> v (1e6, 0);
    v[1] = 1;
    for(int i = 2; i < 1e6; i++){
       v[i] = v[i - 1] + sum(i);
    }

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        cout << v[temp] << endl;
    }
    return 0;
}