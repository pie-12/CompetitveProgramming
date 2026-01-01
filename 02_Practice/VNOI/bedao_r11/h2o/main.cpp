#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	map <int,int> x;
	int a[n+1];
	for (int i = 0, fi, se; i < n; i++){
        cin >> fi >> se;
        x[fi] = se;
        a[i+1] = fi;
	}
	int q;
	cin >> q;
	vector <pair<int,int>> w;
	for (int i = 0, fi, se; i < q; i++){
        cin >> fi >> se;
        w.push_back({fi,se});
	}
	int ans = 0;
	for (auto t: w){
        for(int i = t.first; i < t.second; i++){
            ans+=x[a[i]]*(a[t.second] - (a[i]));
        }
        cout <<  ans << endl;
        ans = 0;
	}
	return 0;
}
