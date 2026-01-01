//gah dang, imma pie12 【=◈︿◈=】
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define hi signed main()
#define bye return 0;
#define int long long
#define float long double
#define endl '\n'
using namespace std;
hi {
    //io
    fast

    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int cnt = 0;
    for(int i = 0, j = n - 1; i <= j; i++){
        int sum = a[i];
        int times = 1;
        while(sum + a[j] <= m && times < 2){
            sum += a[j];
            times ++; j--;
        }
        cnt++;
    }
    cout << cnt;
    bye
}