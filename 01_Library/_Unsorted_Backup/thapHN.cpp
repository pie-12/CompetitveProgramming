//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

void move_disk(int n, char s, char d, char i){
    if(n == 1)
        cout << "Move " << s << " to " << d << endl;
    else{
        move_disk(n - 1, s, i, d);
        cout << "Move " << s << " to " << i << endl;
        move_disk(n - 1, i, d, s);        
    }
}

signed main() {
    //io
    fast
    int n; cin >> n;
    cout << "Move " << n << " disk from A to C." << endl; 
    move_disk(n, 'A', 'B', 'C');

    return 0;
}