#include <iostream>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long a, b;
    cin >> a >> b;
    long long arr[b];
    long long sum = 0;
    for (long long i = 1; i<= b; i++)
        arr[i]=0;
    for (long long i = 1; i<=b ; i++)
        {
                for (long long j=i*2; j<=b; j+=i)
                    arr[j]+=i;
                arr[i]=abs(i-arr[i]);
                if (i>= a && i <= b) sum+=arr[i];
        }
    cout << sum;
    return 0;
}
