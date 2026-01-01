//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

bool str (string s1, string s2){
    if(s1.size() == s2.size())
        return s1 < s2;
    else return (s1.size() < s2.size());
} 

signed main() {
    //io
    fast

    int n; cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    sort(s , s + n, str);
    int best = 0;
    
    for(int i = 0; i < n - 1; i++){
        bool is = false;
        for(int j = i + 1; j < n; j++){
            if((int)s[j].find(s[i]) != -1) is = true;
        } 
        if(is == true) best = max(best , (long long)s[i].size());
    }

    string ans = "";
    for(int i = 0; i < n; i++){
        if(s[i].size() == best && ans != "") ans = min(s[i],ans);
        if(s[i].size() == best && ans == "") ans = s[i];
    }
    cout << ans;
    return 0;     
}