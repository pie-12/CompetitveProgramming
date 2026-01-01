//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
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
#define int long long
#define float long double
#define endl '\n'
using namespace std;

HI {
    IO FAST
    int n, k; cin >> k >> n;
    vector <pair<int,int>> v;
    for(int i = 0; i < n; i++){
    	int temp_1, temp_2; cin >> temp_1 >> temp_2;
    	v.push_back({temp_1, temp_2});
    }
    sort(v.begin(), v.end());
    int i = 0;
    while(i < n){
    	int temp = v[i].first;
    	int bonus = v[i].second;
    	if(k > temp){
    		k += bonus;
    		i++;
    	}    	
    	else break;
    }
    if(i == n) cout << "YES";
    else cout << "NO";
    BYE
}
