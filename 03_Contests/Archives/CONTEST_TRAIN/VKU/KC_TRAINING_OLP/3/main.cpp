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

    int t; t = 1 ;
    while(t--){
        int temp; cin >> temp;
        if(temp < 10){
            cout << temp << endl;
        }
        else{
                int i = 1;
                while(temp - (long long)(9 * i * pow(10,i - 1)) > 0){
                    temp -= (long long)(9 * i * pow(10,i - 1));
                    cout << temp << ' ' << i << ' ' << (intd
                cout << temp << ' ' << i << ' ' << (int)(i*pow(10, i - temp % i)) + (temp % i)%10 << " du " << temp % i  << endl;
                if(temp % i == 1) cout << (long long)((temp / (i*pow(10,i - 1))) + 1) % 10 << "a" << endl; //ok
                else if (temp % i == 0) cout << (long long)((temp / i) - 1) % 10 << "b" << endl; //ok
                else cout << (long long)(temp / ((i*pow(10, i - temp % i))) % 10 << "c" <<endl; //ok
            }
    }
    return 0;     
}