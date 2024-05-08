#include <iostream>

using namespace std;

long long countWay(long long n, long long k, long long listSolved[])
{
    if(listSolved[n] > 0)
        return listSolved[n];
    if(n <= 1)
    {
        listSolved[n] = 1;
        return 1;
    }
    if(k > n)
        k = n;
    long count = 0;
    for(int i = 1; i <= k; i += 1)
        count += countWay(n - i, k, listSolved);
    listSolved[n] = count;
    return count;
}


int main()
{
//    long long value;
//    int n;
//    cin >> n;
//    long long a[2];
//    for (int i = 0; i < n; i++)
//    {
//    cin >> a[0] >> a[1];
//    value = a[1] - a[0];
//    value = value + 2;
//    long long ans = f(value);
//    cout << ans << '\n';
//    }

//long long a[2];
//long long temp;


int t; cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
        long long listSolved[n];

		cout << countWay(n,k,listSolved) << endl;
            }
    return 0;
}
