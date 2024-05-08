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

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int red = 0, blue = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((int)a[i] > (int)b[i]) red++;
            else if((int)a[i] < (int)b[i]) blue++;
        }    
    }
    if(red > blue) cout << "RED" << endl;
    else if(red < blue) cout << "BLUE" << endl;
    else cout << "EQUAL" << endl;
    }

    return 0;
}