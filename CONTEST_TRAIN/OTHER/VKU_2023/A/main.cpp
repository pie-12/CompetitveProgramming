#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
double binpow (double a, int b){

    if (b == 0)
        return 1;
    double x = binpow (a, b/2);
    if (b % 2 == 1)
        return a * x * x;
    else
        return x * x;

}
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
signed main() {
    //freopen("main.inp","r",stdin);
    //freopen("main.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	double x, n;
	cin >> x >> n;
	double sin = x;
	double cos = 1;

	if(n <= 19){
	for(int i = 3, j = 0; i <= n; i += 2){
		if(j % 2 == 0){
			sin -= (double)((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
		else {
			sin += (double)((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
	
	}

	
	for(int i = 2, j = 0; i <= n; i += 2){
		if(j % 2 == 0){
			cos -= (double)((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
		else {
			cos += ((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
	}
}
	else {
		for(int i = 3, j = 0; i <= 19; i += 2){
		if(j % 2 == 0){
			sin -= (double)((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
		else {
			sin += (double)((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
	
	}

	
	for(int i = 2, j = 0; i <= 19; i += 2){
		if(j % 2 == 0){
			cos -= (double)((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
		else {
			cos += ((binpow(x,i))/giaiThua(i))*1.0;
			j++;
		}
	}

	}
	cout << fixed << setprecision(15) << sin << ' ' << cos;
	return 0;
}



