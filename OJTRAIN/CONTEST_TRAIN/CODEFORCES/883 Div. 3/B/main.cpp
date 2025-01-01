#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast

    int t;
    cin >> t;
    while(t--){
    	string s1, s2, s3;
    	bool ans = 0;
    	cin >> s1 >> s2 >> s3;
    	if(s1[0] == s2[0] && s1[0] == s3[0] && s1[0] != '.' && ans == 0) {cout << s1[0] << endl; ans = 1;}
    	if(s1[1] == s2[1] && s1[1] == s3[1] && s1[1] != '.' && ans == 0) {cout << s1[1] << endl; ans = 1;}
    	if(s1[2] == s2[2] && s1[2] == s3[2] && s1[2] != '.' && ans == 0) {cout << s1[2] << endl; ans = 1;}
    	if(s1[0] == s1[1] && s1[0] == s1[2] && s1[0] != '.' && ans == 0) {cout << s1[0] << endl; ans = 1;}
    	if(s2[0] == s2[1] && s2[0] == s2[2] && s2[0] != '.' && ans == 0) {cout << s2[0] << endl; ans = 1;}
    	if(s3[0] == s3[1] && s3[0] == s3[2] && s3[0] != '.' && ans == 0) {cout << s3[0] << endl; ans = 1;}
    	if(s1[0] == s2[1] && s1[0] == s3[2] && s1[0] != '.' && ans == 0) {cout << s1[0] << endl; ans = 1;}
    	if(s1[2] == s2[1] && s1[2] == s3[0] && s1[2] != '.' && ans == 0) {cout << s1[2] << endl; ans = 1;}
    	if(ans == 0) cout << "DRAW" << endl;    	
    }
	return 0; 
}