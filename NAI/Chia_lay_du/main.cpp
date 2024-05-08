#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i] % k);
    }
    cout << s.size();
    return 0;
}
