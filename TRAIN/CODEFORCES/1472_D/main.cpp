//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define hi signed main()
#define bye return 0;
#define int long long
#define float long double
#define endl '\n'
using namespace std;
hi {
    //io
    fast
    
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    bool turn = false;
    int alice = 0, bob = 0;
    for(int i = 0; i < n; i++){
        if(turn == false && a[i] % 2 == 0) alice += a[i];
        else if(turn == true && a[i] % 2 == 1) bob += a[i];
        turn = !turn;
    }
    if(alice > bob) cout << "Alice" << endl;
    else if(alice < bob) cout << "Bob" << endl;
    else cout << "Tie" << endl;
}
    bye
}