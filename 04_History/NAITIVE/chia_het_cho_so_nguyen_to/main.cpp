#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long a[k];
    long long sum = 0;
    for (long long i = 0; i < k; i++)
        cin >> a[i];
    for (long long i = 1; i <= n; i++)
        for (long long j = 0; j < k; j++)
        if (i%a[j]==0){sum++;j++;};
        cout << sum;

    return 0;
}
