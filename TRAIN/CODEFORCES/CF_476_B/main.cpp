#include <bits/stdc++.h>
#define int long long

using namespace std;

int x[15];
vector <int> v;
int sum = 0;

void advt (int x[],int n){
    for (int i = 1; i <= n; i++){
//            cout << x[i] << " ";
        sum += x[i];
    }
    v.push_back (sum);
    sum = 0;
}
void Try(int i, int n){
        for (int j = -1; j <= 1; j = j + 2){
            x[i] = j;
        if (i == n)
            advt(x,n);
        else
            Try (i + 1, n);
        }
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    string a, b;
    int sum1 = 0, sum2 = 0, n = 0;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        if (a[i] == '+') sum1++;
        if (a[i] == '-') sum1--;
        if (b[i] == '+') sum2++;
        if (b[i] == '-') sum2--;
        if (b[i] == '?') n++;
    }

    if (n == 0){
        float z = 1.0*(sum1 == sum2);
        cout << setprecision (12) << fixed << z;
    }
    else{
        Try(1,n);
        int cnt_ans = 0;
        for (auto x : v){
            if (x == sum1 - sum2) cnt_ans++;
        }
        double ans = ((1.0*cnt_ans) / (1.0*v.size()))*1.0;
        cout << setprecision (12) << fixed << ans;
        //...

    }
	return 0;
}
