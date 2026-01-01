#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int temp;
vector <int> v;
signed main() {
    freopen("MAXNUM.inp","r",stdin);
    freopen("MAXNUM.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> temp;
    int x = temp;
    while(x > 0){
        v.push_back(x%10);
        x/=10;
    }
    reverse(v.begin(),v.end());
    while(prev_permutation(v.begin(),v.end())){
        for (auto x: v)
            cout << x;
        return 0;
    }

    cout << 0;
	return 0;
}
