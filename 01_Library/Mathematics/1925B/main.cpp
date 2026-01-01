//pie-12 (◕‿◕) 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int x,n;cin>>x>>n;	
	if(x%n==0)cout<<x/n<<'\n';
	else
	{
		vector<int>v;
		for(int i=2;i<=sqrt(x);i++)if(x%i==0){v.push_back(i); v.push_back(x/i);}
		sort(v.begin(),v.end());
		int ans=1;			
		for(auto e:v){		
			if(x-e*n<0)break;			
			ans=max(__gcd(e,x-e*n),ans);			
		}
		cout <<ans<<'\n';	
	}
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t=1; cin>>t; while(t--)solve();
    return 0;
}