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
set<int> s2,s3,s5,s7;
bool isChinhPhuong(int n){
	if(n <= 0) return false;
	if((int)pow(n, 1.0 / 2) * (int)pow(n, 1.0 / 2) == n) {
   		return true;
   	}
   	return false;
}
bool isLapPhuong(int n){
	if(n <= 0) return false;
	if((int)pow(n, 1.0 / 3) * (int)pow(n, 1.0 / 3) * (int)pow(n, 1.0 / 3) == n){
		return true;
   	}
   	return false;
}
HI {
    IO FAST
    int t; cin >> t;
    while(t--){
   	int n; cin >> n;
   	bool ok = false;
   	if(isChinhPhuong(n)){
   		cout << 2 << endl;
   		ok = true;
   	}
   	if(ok) continue;
   	if(isLapPhuong(n)){
   		cout << 3 << endl;
   		ok = true;
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(n - i * i < 0) break;
   		if(isChinhPhuong(n - i * i)) {
   			cout << 4 << endl;
   			ok = true;
   			break;
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(n - i * i * i < 0) break;
   		if(isLapPhuong(n - i * i)){
   			cout << 5 << endl;
   			ok = true;
   			break;
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(isChinhPhuong(n - i * i * i)){
   			cout << 5 << endl;
   			ok = true;
   			break;
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(ok) break;
   		for(int j = 1; j <= n; j++){
   			if(n - i * i - j * j < 0) break;
   			if(isChinhPhuong(n - i * i - j * j)){
   				cout << 6 << endl;
   				ok = true;
   				break;
   			}
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(n - i * i * i < 0) break;
   		if(isLapPhuong(n - i * i * i)){
   			cout << 6 << endl; 
   			ok = true;
   			break;
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(ok) break;
   		for(int j = 1; j <= n; j++){
   			if(n - i * i - j * j < 0) break;
   			if(isLapPhuong(n - i * i - j * j)){
   				cout << 7 << endl;
   				ok = true;
   				break;
   			}
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(ok) break;
   		for(int j = 1; j <= n; j++){
   			if(n - i * i - j * j < 0) break;
   			if(isLapPhuong(n - i * i * i - j * j)){
   				cout << 8 << endl;
   				ok = true;
   				break;
   			}
   		}
   	}
   	if(ok) continue;
   	for(int i = 1; i <= n; i++){
   		if(ok) break;
   		for(int j = 1; j <= n; j++){
   			if(ok) break;
   			for(int k = 1; k <= n; k++){
   				if(n - i * i - j * j - k * k < 0) break;
   				if(isChinhPhuong(n - i * i - j * j - k * k)){
   					cout << 8 << endl;
   					ok = true;
   					break;
   				}
   			}
   		}
   	}
   	}

    BYE   			
}