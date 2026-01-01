#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	set <int> s;
	s.insert(2);
	s.insert(5);
	s.insert(8);
	set<int>::iterator it = s.begin();
	advance(it,2);
	cout << *it;
	return 0;
}
