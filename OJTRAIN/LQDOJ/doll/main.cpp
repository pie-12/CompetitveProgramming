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

    map<int,int> mp;
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector <bool> mark (n,false);
    int sum = 0;
    for(int i = n - 1; i >= 0; i--){
    	if(mark[i] == false){
    		int temp = a[i];
    		sum += a[i];
    		mark[i] = true;
    		for(int j = i - 1; j >= 0; j--){
    			while(mark[j] == true && j >= 1) j--;
	    		if(a[j] + k <= temp && mark[j] == false) {mark[j] = true; temp = a[j];}
    		}    		
    	}    	
    }
    cout <<sum;
    return 0;
}