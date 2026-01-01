#include <bits/stdc++.h>
using namespace std;
int x, l, r;
int res(int i){

    int r;
    x = i;
    while(x>10){
        r = x % 10;
        x /= 10;
        if(r == 0) return -1;
        if(i % r != 0)return -1;
    }
    if(r == 0) return -1;
    if(i % x == 0) return i;
    return -1;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> v;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; i++){
        if (i % 10 != 0){
        int ans = res(i);
        if (ans != -1){
            v.push_back(ans);
            cnt++;
            }
        }
    }
    cout << cnt << endl;
    for(auto x: v)
        cout << x << " ";





}
