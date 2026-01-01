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
        
        int n, k;
        cin >> n >> k;
        if(k <= n){
            if(k % 2 == 0) cout << k / 2 - 1;
            else cout << k / 2;
        }
        else {
            if(k > n && k <= 2*n - 1)
                if((2*n - k) % 2 == 1) cout << (n - (k - n))/2 + 1;
                else cout << (n - (k - n))/2;
            else cout << 0;
        }
        return 0;
    }