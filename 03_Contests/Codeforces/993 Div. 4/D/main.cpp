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
    	map <int,bool> mp;
    	int a[n];
    	for(int i = 0; i < n; i++){
    		int temp; cin >> temp;
    		a[i] = temp;
    		if(i == 0) mp[temp] = true; 
    	}
    	int cnt = 1;

    	cout << a[0] << ' ';
    	for(int i = 1; i < n; i++){
    		if(mp[a[i]] == true){
    			while(mp[cnt] == true) cnt++;
    			cout << cnt << ' ';							
    			mp[cnt] = true;
    		}
	    	else{
	    		mp[a[i]] = true;
	    		cout << a[i] << ' ';
	    	}
    	}
    	cout << '\n';
    }
    return 0;
}