//yo, i'm pie12 (●'◡'●)
#include <bits/stdc++.h>
#define HI  signed main()
#define ll long long
#define ld long double
#define endl '\n'
using namespace std;
#ifndef ONLINE_JUDGE
#define IO \
freopen("main.inp","r",stdin); \
freopen("main.out","w",stdout);
#else
#define IO
#endif
#define FAST \
ios::sync_with_stdio(false); \
cin.tie(nullptr);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define BYE \
cerr <<"Time elapsed: " << TIME << " s\n"; \
return 0;

int const MAXn = 1e7 + 1;
vector <int> sievie (MAXn);
vector <int> mp(MAXn);

void sieve()
{
	for(int i = 1; i <= MAXn; i++){
    	sievie[i] = i;
    }
   	for(int i = 2; i * i <= MAXn; i++){
        if(sievie[i] == i)
            for(int j = i * i; j <= MAXn; j += i){
                if(sievie[j] == j) sievie[j] = i;
            }
    }
}

HI {
    IO
    // freopen("capsomayman.inp","r",stdin); 
	// freopen("capsomayman.out","w",stdout); 
    FAST
    sieve();

    for(int i = 2; i <= 100; i++){
        cout << i << ' ' << sievie[i] << endl;
    }
    cout << endl;
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++){
    	int x = i;
        int t = 1;
		while (x > 1){
			int p =	sievie[x];
            t *= p;
            while (x % p == 0) x/=p;
		}
		mp[t]++;
    }
    

    int sum = 0;
	for(auto temp : mp){
		sum += (temp * (temp - 1) / 2);
	}

	cout << sum;
    BYE
}
