//oy, i'm pie12
#include <bits/stdc++.h>
#define HI  signed main()
#define ll long long
#define ld long double
#define endl '\n'
using namespace std;
#ifndef ONLINE_JUDGE
#define IO \
freopen("main.inp","r",stdin); \
freopen("main.out","w",stdout);
#else
#define IO
#endif
#define FAST \
ios::sync_with_stdio(false); \
cin.tie(nullptr);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define BYE \
cerr <<"Time elapsed: " << TIME << " s\n"; \
return 0;

bool check(string s){
	stack <char> st;
    bool ok = true;
    for(int i = 0; i < s.size(); i++)
    {
    	char temp = s[i];
    	if(temp == '{' || temp == '[' || temp == '(') st.push(temp);
    	else
    	{
    		if(st.empty()) return false;
    		if(temp == '}')
    			if(st.top() == '{') st.pop();
    			else return false;
    		if(temp == ']')
    			if(st.top() == '[') st.pop();
    			else return false;
    		if(temp == ')')
    			if(st.top() == '(') st.pop();
    			else return false;
    	}
	}
	if(st.empty()) return true;
	return false;
}
HI {
	// IO FAST   
    freopen("PARENTHESES.INP","r",stdin);
    freopen("PARENTHESES.OUT","w",stdout);
    FAST
    int n; cin >> n;
    while(n--)
    {
	    string s; cin >> s;
	    if(check(s)) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
    BYE
}
