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
    while(t --){
        int n, k; cin >> n >> k;
        int cnt_odd = 0, cnt_even = 0;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;
            if(temp % 2 == 1) cnt_odd++;
            else cnt_even++;
        }
        if(cnt_odd == 0) {
            cout << "No" << endl;
            continue;
        }
        if(k == 1 && cnt_odd > 0){
            cout << "Yes" << endl;
            continue;
        }
        if(k == 1 && cnt_odd == 0){
            cout << "No" << endl;
            continue;
        }
        if(k == n){
            if(cnt_odd % 2 == 1) cout << "Yes" << endl;
            else cout << "No" << endl;
            continue;
        }
        if(cnt_even == 0 && k % 2 == 0){
            cout << "No" << endl;
            continue;
        }
        k -= 1; cnt_odd -= 1; 
        if(k > cnt_odd){
        while(cnt_odd - 3>= 0){
                k -= 3;
                cnt_odd -= 3;
            }
            if(k > 0 && cnt_odd == 0) cout << "Yes" << endl;
            if(cnt_odd == 1 && cnt_even >= k) cout << "Yes" << endl;
            if(cnt_odd == 1 && cnt_even < k) cout << "No" << endl;
            if(cnt_odd == 2 && k > 1) cout << "Yes" << endl;
            if(cnt_odd == 2 && k == 1 && cnt_even > 0) cout << "Yes" << endl;
            if(cnt_odd == 2 && k == 1 && cnt_even == 0) cout << "No" << endl;
        }
        else{
            while(k - 3 >= 0){
                k -= 3;
                cnt_odd -= 3;
            }
            if(k == 0) cout << "Yes" << endl;
            if(k == 1 && cnt_even > 0) cout << "Yes" << endl;
            if(k == 1 && cnt_even == 0) cout << "No" << endl;
            if(k == 2){
                if(cnt_even > 1) cout << "Yes" << endl;
                else if(cnt_odd > 1) cout << "Yes" << endl;
                else cout << "No" << endl; 
            }
        }

    }
    return 0;
}