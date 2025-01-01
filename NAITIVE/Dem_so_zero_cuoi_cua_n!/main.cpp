#include <iostream>
#define ll long long
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll temp; cin >> temp;
    ll ans = 0;
    ll n = 5;

    while (temp >= n)
    {
        ans += (temp / n);
        n *= 5;
    }
    cout << ans;
    return 0;
}
