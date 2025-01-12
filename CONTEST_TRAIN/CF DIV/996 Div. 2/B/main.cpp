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
    	int a[n], b[n];
    	for(int i = 0; i < n; i++) cin >> a[i];
    	for(int i = 0; i < n; i++) cin >> b[i];

    	int du = INT_MAX, thieu = 0;
    	int cnt_t = 0;
    	for(int i = 0; i < n; i++){
    		if(a[i] >= b[i]) du = min(du, a[i] - b[i]);
    		else {cnt_t ++; thieu += (b[i] - a[i]);}
    	}
    	if (cnt_t > 1) {cout << "NO\n"; continue;}
    	if(du >= thieu) cout << "YES\n";
    	else cout << "NO\n";
    }
    return 0;
} 