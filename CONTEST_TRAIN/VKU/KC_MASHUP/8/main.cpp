//CF: pie12 【=◈︿◈=】 
#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'
using namespace std;
 
signed main() {
    //io
    fast

    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    int k; cin >> k;
    int mid;
    int l = 2, r = a*a + b*b;
    bool out = 0;
    //stfu, đừng để thứ t chặt là đầu m thay vì là nhị phân
    while(l <= r){
        mid = (l + r) / 2;
        int cnt = 0, j = 0; 
        int exist = 0;
        map <int,bool> kq;
        //stfu, chặt lần 2 (hoặc không)
        for(int i = 1; i <= a; i++){
                if(mid >= i*i && sqrt(mid - i*i) > 0){
                j = sqrt(mid - i*i);
                cnt += j;
                if(i*i + j*j == mid) exist++;           
            }
        }
        //chặt bằng toán
        
        //cout << "mid = " << mid << " cnt = " << cnt << "; l = " << l << " r = " << r << "| exist = " << exist << endl;
        if((cnt == k && exist > 0) || (cnt == k + 1 && exist > 1) || l == r){
            cout << mid << endl;
            out = 1;
            return 0;
        }
        if(cnt >= k) r = mid - 1;
        else  l = mid + 1;
    }
    if(out == 0) cout << mid;
    return 0; 
    
}