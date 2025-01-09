	//pie-12 (◕‿◕) 
	#include <bits/stdc++.h>
	#define ll long long
	using namespace std;
	int main()
	{
	    #ifndef ONLINE_JUDGE
	        freopen("main.inp","r",stdin);
	        freopen("main.out","w",stdout);
	    #endif

	    ios::sync_with_stdio(false);
	    cin.tie(nullptr);

	    int t; cin >> t;
	    while(t--)
	    {
	    	int n; cin >> n;
	    	ll even = 0, odd = 0;
	    	for(int i = 1; i <= n; i++)
	    	{
	    		int temp; cin >> temp;
	    		if(i&1) odd += temp;
	    		else even += temp; 
	    	}

	    	if(n&1){
	    		if(odd%(n/2+1) != 0 || even%(n/2) != 0) {cout << "NO\n"; continue;}
	    		cout << (odd /(n/2+1) == even /(n/2)? "YES\n" : "NO\n");
	    	}
	    	else{
	    		if(odd%(n/2) != 0 || even%(n/2) != 0) {cout << "NO\n"; continue;}
	    		cout << (odd /(n/2) == even /(n/2)? "YES\n" : "NO\n");
	    	}
	    }
	    return 0;
	}