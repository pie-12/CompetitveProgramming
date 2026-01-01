//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int>v(n); for(auto &x:v)cin >> x;
	int sum_l=0,sum_r=0;
	int cnt_l=0,cnt_r=0;
	
	for(int i=0,j=n-1;i<=j;){
		if(sum_l<=sum_r){
			sum_l+=v[i++]; ++cnt_l;
		}
		else {
			sum_r+=v[j--]; ++cnt_r;
		}
	}   
	cout<<cnt_l<<' '<<cnt_r;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t=1; while(t--)solve();
    return 0;
}