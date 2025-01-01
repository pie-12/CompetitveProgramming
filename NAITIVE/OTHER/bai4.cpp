#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, temp, sum = 0, phi = 0;
priority_queue <int , vector <int>, greater<int>> pq;
signed main()
{
   cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> temp;
        pq.push(temp);
    }
    int ma = -LONG_LONG_MIN;
    int mi = LONG_LONG_MAX;
    while (pq.size() > 1){
        for (int i = 1; i <= k  ; i++){
            int x = pq.top();
            pq.pop();
            ma = max(ma, x);
            mi = min(mi, x);
            sum += x;
            if (pq.size()== 0 )break;
        }
        phi += (ma - mi);
        pq.push(sum);
        sum = 0;
        ma = -LONG_LONG_MIN;
        mi = LONG_LONG_MAX;
     }
    cout << pq.top() << " " << phi;

    return 0;
}
