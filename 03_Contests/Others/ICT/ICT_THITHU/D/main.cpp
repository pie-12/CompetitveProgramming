#include <iostream>
#include <map>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin >> n;
    map <int,int> mp;
    for (int i = 1; i <= n - 1; i++){
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    for (int i = 1; i <= n ; i++){
        if (mp[i] == 0){
            cout << i;
            break;
        }
    }
    return 0;
}
//123
