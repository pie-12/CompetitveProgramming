#include <iostream>
#define mod 1000000000
using namespace std;
long long n;
long long r;
long long res;

long long lt (long long n)
{
    	res = 1;
	r = 2 % mod;


	while (n > 0)
	{
		if(n % 2 == 1)
			res = (res * r) % mod;

		r = (r * r) %mod;
		n /= 2;
	}
	return res;
}

void input ()
{
    cin >> n;
    n--;
}

void solve()
{
    long long ans1 = lt(n)%mod;
    long long ans2 = (n%mod*lt(n-1)%mod)%mod;
    long long ans = (ans1%mod + ans2%mod)%mod;
    cout << ans;
}

int main ()
{
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    input();
    solve();

    return 0;
}
