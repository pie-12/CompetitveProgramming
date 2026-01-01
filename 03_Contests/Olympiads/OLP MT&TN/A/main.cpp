//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

signed main() {
	fast
	//io
	
	int n, max, min, sum = 0, median = 0, max_mode_cnt = 0;
	float avr, x = 0, y;
	cin >> n;
	map<int,int> mp;
	int b = n / 2;
	int a[n];
	
	for (int i = 0; i < n; i++){
		int temp; cin >> temp;
		a[i] = temp;
		mp[temp]++;
		if(mp[temp] >= max_mode_cnt) max_mode_cnt = mp[temp];
		sum += a[i];

	}
	sort(a, a + n);
	max = a[9];
	min = a[0];
	avr = 1.0*sum/n;
	median = a[b];
	cout << max <<endl;
	cout << min <<endl;
	cout << fixed << setprecision(7)<< avr <<endl;
	cout << median <<endl;

	for(auto x: mp){
		if(x.second == max_mode_cnt){
			cout << x.first << endl;
			break;
		}
	}
	for (int i = 0; i < n; i++){
		x += pow(a[i] - avr, 2);
	}
	y = sqrt(1.0*x/n);
	cout << fixed << setprecision(7) << y << endl;


	return 0;
}