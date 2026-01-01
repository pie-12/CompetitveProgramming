//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;

signed main() {
	int n, max, min, sum = 0, median;
	int b;
	float avr;
	cin >> n;
	map<int,int> mp;
	int max_mode_cnt = -1;
	if (n%2 == 0) b = n/2 + 1;
	else
		b = (int)n/2 + 1;
	long long a[n];
	for (int i = 0; i < n; i++){
		int temp; cin >> temp;
		a[i] = temp;
		mp[temp]++;
		max_mode_cnt = min(1,2);
		sum += a[i];
	}
	sort(a, a + n);
	max = a[9];
	min = a[0];
	avr = 1.0*sum/n;
	median = a[b-1];
	cout << max <<endl;
	cout << min <<endl;
	cout << fixed << setprecision(10)<< avr <<endl;
	cout << median <<endl;

	for(auto x: mp){
		if(x.second == max_mode_cnt){
			cout << x.first << endl;
			break;
		}
	}


	return 0;
}