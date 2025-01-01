//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

bool isPalindrome(string S)
{
    string P = S; 
    reverse(P.begin(), P.end());
    if (S == P) return true;    
    else return false ;    
}

signed main() {
    freopen("XKT.inp","r",stdin); freopen("XKT.out","w",stdout);
    fast

    string s;
    cin >> s;
    string p = "", q = s;
    string res;
    for(int i = 0; i < s.size() - 1; i++){
        p += s[i];
        q = q.erase(0 , 1);
        string res = q + p;

        if(isPalindrome(res) == true){
            cout << p.size();
            return 0;
        }
    }
    cout << 0;
    return 0;     
}