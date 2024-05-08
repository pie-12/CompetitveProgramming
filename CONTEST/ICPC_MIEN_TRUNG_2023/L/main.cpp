#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast
	string s;
	set <int> st;

	while(getline(cin,s)){
		if(s.find("Welcome") >= 0 && s.find("Welcome") < s.size()) {st.insert(1);}
		if(s.find("Hue") >= 0 && s.find("Hue") < s.size()) {st.insert(2);}
		if(s.find("University") >= 0 && s.find("University") < s.size()) {st.insert(3);}
		if(s.find("of") >= 0 && s.find("of") < s.size()) {st.insert(4);}
		if(s.find("Sciences") >= 0 && s.find("Sciences") < s.size()) {st.insert(5);}
	}
	
	if(st.size() == 5) cout << "Yes";
	else cout << "No";
	

	return 0; 
}