#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[15];
int n;
int used[15];
int cnt = 0;
string s = "";
void inkq(){
    for (int i = 1; i <= n; i++){
        s += " ";
        s += to_string(a[i]);


    }
    s += "; ";
    cnt ++;
}
void Try(int i){
    for (int j = 1; j <= n; j++){
        if (used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if (i == n) inkq();

        else {Try(i+1);}
        used[j] = 0;
        }
    }
}
signed main()
{
    for (int i = 1; i <= 15; i++)
        used[i] = 0;
    cin >> n;
    Try(1);
    s.erase(s.size()-2,s.size()-1);
    s.erase(0,1);
    cout << s;
    cout << '\n' << cnt;
    return 0;
}
