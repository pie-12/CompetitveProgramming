//pie-12 (◕‿◕)
//https://codeforces.com/problemset/problem/72/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int x; cin>>x;
    int odd=0,even=0;
    for(int i=1;i<=x;i++)if(x%i==0)if(i&1)odd++;else even++;
    if(odd==even)cout<<"yes";else cout<<"no";
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