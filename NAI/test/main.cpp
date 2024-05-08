#include <iostream>
using namespace std;
int main ()

{

	long long a, r, res, d, n;
    cin >> a >> n >> d;
	res = 1;
	r = a % d;
    cout << "res = " << res << endl;
		cout << "r = " << r << endl;
		cout << "n = " << n << endl;
	// So do Nhan Ai Cap
	while (n > 0)
	{
		if(n % 2 == 1)
			res = (res * r) % d;

		r = (r * r) %d;
		n /= 2 ;
		cout << "res = " << res << endl;
		cout << "r = " << r << endl;
		cout << "n = " << n << endl;
	}

	return 0;
}
