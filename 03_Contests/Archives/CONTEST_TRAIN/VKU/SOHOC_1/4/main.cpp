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

    int n; cin >> n;
    while(n--){
    int temp; cin >> temp;
    set <int> s;
    for(int i = 1; i <= sqrt(temp); i++){
        if(temp % i == 0){
            if(i % 2 == 0)s.insert(i);
            if((temp/i)%2 == 0)s.insert(temp / i);
        }
    }   
    cout << s.size() << endl;
    s.clear();
}
    
    return 0;  

}