#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast

    int s1, s2, s3;
    map <int,int> mp;
    cin >> s1 >> s2 >> s3;

    for(int i = 1; i <= s1; i++)
        for(int j = 1; j <= s2; j++)
            for(int k = 1; k <= s3; k++){
                mp[i + j + k]++;
            }
    int best = 0;
    for(auto x: mp){
        best = max(x.second,best);
    }
    for(auto x: mp){
        if(x.second == best){
            cout << x.first;
            break;
        }
    }
	return 0; 
            
}