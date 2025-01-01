//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
 
int sum (int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
 
bool is_one(int n){
	while(n > 0){
		if(n % 10 == 1) return true;
		n /= 10;
	}
	return false;
}
 
signed main() {
    //io
    fast
 
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int temp; 
    	cin >> temp;
    	int num = sum(temp);
    	num = sum(num);
    	if((((temp - 1) % 3) == 0) || ((temp + 1) % 3 == 0)) cout << "First" << endl;
    	else cout << "Second" << endl;
    }
    return 0;     
}