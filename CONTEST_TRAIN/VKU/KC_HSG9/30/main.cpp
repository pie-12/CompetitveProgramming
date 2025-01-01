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
    //io
    fast

    string s;
    cin >> s;
    string s1 = s, s2 = "";

    for(int i = s.size() - 1; i >= 1; i--){
        s1 = s1.erase(i , 1);
        s2 = s[i] + s2;
        if(isPalindrome(s1) == true && isPalindrome(s2)){
            cout << s1 << endl << s2;
            return 0;
        }
    }
    cout << -1;
    return 0;     
}