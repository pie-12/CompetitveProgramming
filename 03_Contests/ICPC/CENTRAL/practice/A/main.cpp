//test xem chay bao nhieu la TLE
#include <bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef ONLINE_JUDGE
    //     freopen("main.inp","r",stdin);
    //     freopen("main.out","w",stdout);
    // #endif
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	
	int t; cin >> t;
    while(t--)
    {
	    int a,b,c; cin >> a >> b >> c;
	    if(c > 0) cout << "CURVE UP" << endl;
	    else if(c < 0) cout << "CURVE DOWN" << endl;
	}
	
	return 0;
}