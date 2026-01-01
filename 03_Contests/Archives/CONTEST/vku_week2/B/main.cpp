//yo, i'm pie12 (・ω・)ﾉ 
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

int index_i = 0, index_j = 0;
string s; 
int h, c, n; 
char a[500][500];	
bool check (int ii, int jj){
	for(int i = 0; i < n; i++){
		if(s[i] == 'L') jj--;
    	if(s[i] == 'R') jj++;
    	if(s[i] == 'U') ii--;
    	if(s[i] == 'D') ii++;
    	if(a[ii][jj] != '.') return false;
	}
	return true;
}
HI {
    IO FAST
   
    cin >> h >> c >> n;
    cin >> s;
    for(int i = 0; i < n; i++){
    	if(s[i] == 'L') index_j--;
    	if(s[i] == 'R') index_j++;
    	if(s[i] == 'U') index_i--;
    	if(s[i] == 'D') index_i++;
    }
    int ans = 0;
    
    for(int i = 0; i < 500; i++)
    	for(int j = 0; j < 500; j++)
    		a[i][j] = '!';

    for(int i = 0; i < h; i++)
    	for(int j = 0; j < c; j++)
    		cin >> a[i][j];

    for(int i = 0; i < h; i++)
		for(int j = 0; j < c; j++)
			if(i + index_i >= 0 && j + index_j >= 0 && i + index_i < h && j + index_j < c)
			if(a[i][j] == '.' && a[i + index_i][j + index_j] == '.') {
				if(check(i,j) == true) ans++;				
			}

	cout << ans;
    	
    BYE
}
