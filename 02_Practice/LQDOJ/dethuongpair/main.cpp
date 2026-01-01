#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int m, M;
	cin >> m >> M;
	int pos_m = 0, pos_M = 1, pos_m_ans = 0, pos_M_ans = 1, M_ans = M, m_ans = m, ans = LONG_LONG_MIN;
	int a[n];
	a[1] = M;
	for(int i = 2; i < n; i++) cin >> a[i];
	for(int i = 1; i < n; i++){
		if(a[i] < m && i < n - 1){
			pos_m = i;
			pos_M = i + 1;
			M = a[i + 1];
			m = a[i];
		}
		else if(a[i] >= M){
			pos_M = i;
			M = a[i];
		}
		if(M - m > ans){
			M_ans = M;
			m_ans = m;
			pos_m_ans = pos_m;
			pos_M_ans = pos_M;
			ans = M - m;
		}
		
	}
	
	cout << pos_m_ans + 1 << ' ' << pos_M_ans + 1 << endl << ans;

	return 0;
}