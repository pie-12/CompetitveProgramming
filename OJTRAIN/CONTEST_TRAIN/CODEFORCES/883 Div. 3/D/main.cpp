#include <bits/stdc++.h>
#define io freopen("main.inp","r",stdin); freopen("main.out","w",stdout);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    //io
    fast

    int t;
    cin >> t;
    while(t--){
    int n, d, h;
    cin >> n >> d >> h;
    int arr[n];
    int diff;
    double minus = 0, ans = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++){
        if(arr[i] < (arr[i - 1] + h)) {
            diff = arr[i] - arr[i - 1];
            minus += ((1.0*(h - diff)/h)*d + d)*(diff)*0.5;
        }
        else{
            ans += d*h*0.5;
        }   
    }

    ans = ans + minus + d*h*0.5;
    cout << fixed << setprecision(8) << ans << endl;
    }
    
	return 0; 
}