#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x, y, x1, y1, x2, y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	float temp;
	if(x > x2 && y > y2){
        temp = sqrt(pow((x-x2),2) + pow((y-y2),2))*1.0;
	}
	else if(x < x1 && y < y1){
        temp = sqrt(pow((x1-x),2) + pow((y1-y),2))*1.0;
	}
	else if(x > x2 && y < y1){
        temp = sqrt(pow((x-x2),2) + pow((y1-y),2))*1.0;
	}
	else if(x < x1 && y > y2){
        temp = sqrt(pow((x-x1),2) + pow((y2-y),2))*1.0;
	}
	else if(x >= x1 && x <= x2){
        temp = min(abs(y-y1),abs(y-y2));
	}
    else if(y >= y1 && y <= y2){
        temp = min(abs(x-x1), abs(x-x2));
    }
    cout << fixed << setprecision(1) << temp;


    return 0;
}
