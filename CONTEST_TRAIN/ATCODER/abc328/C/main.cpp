//CF: pie12 【=◈︿◈=】 
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

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    
        vector <int> pre(n, 1);

        for(int i = 1 ; i < n; i++){
            if(s[i] == s[i - 1]){
                pre[i] = pre[i - 1] + pre[i];
            }
            else pre[i] = pre[i - 1];
        }
    while(q--){
        int a , b;
        cin >> a >> b;
        cout << pre[b - 1] - pre[a - 1] << endl;
    }

    return 0;     
}