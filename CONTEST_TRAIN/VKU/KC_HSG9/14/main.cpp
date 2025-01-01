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

        string s;
        cin >> s;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
                int c = (int)s[i] - 48;
                if(c % 2 == 1) {sum += c;}
            }
        cout << sum;
        return 0;     
    }