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

    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    int best = -1e5, sum = -1e5;
	for (int i = 0; i < n; i++) {
		sum = max(a[i],sum+a[i]);
		
			best = max(best,sum);
			
		}
	cout << best << endl;
	}
    return 0;     
}