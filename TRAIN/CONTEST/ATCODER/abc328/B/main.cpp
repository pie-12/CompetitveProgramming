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

    int n;
    cin >> n;
    int sum = 0;
    for(int i =  1; i <= n; i++){
        int temp;
        cin >> temp;

        if(i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9){
            if(temp >= 11*i) {
                sum+= 2;
            }
            else if(temp >= i) sum++;

        }
        else if(i == 11 || i == 22 || i == 33 || i == 44 || i == 55 || i == 66 || i == 77 || i == 88 || i == 99){
            if (temp >= i / 11) sum++;
            if(temp >= i) sum++;
        }
    }
    cout << sum;
    return 0; 
    
}