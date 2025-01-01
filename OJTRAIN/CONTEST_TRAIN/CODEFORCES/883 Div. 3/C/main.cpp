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
        int n, m, h;
        cin >> n >> m >> h;
        int main_cnt, main_pen;
        vector <int> cnt(n);// số bài làm được
        vector <int> pen(n,0); // thời gian pen
        for(int i = 0 ; i < n; i++){
            int time[m];
            for(int j = 0; j < m; j++) cin >> time[j];
            sort(time,time + m);
            int temp = 0;

            vector<int> prefix(m, 0);
            prefix[0] = time[0];
            for(int j = 1; j < m; j++){
                prefix[j] = prefix[j - 1] + time[j];
            }

            for(int j = 0; j < m; j++) if(temp + time[j] <= h){temp += time[j]; cnt[i]++;} else break;
            for(int j = 0; j < cnt[i]; j++) pen[i] += prefix[j];

            main_cnt = cnt[0];
            main_pen = pen[0];
        }
        
        for(int i = 0 ; i < n; i++){
            if(cnt[i] > main_cnt) pen[i] = -1;
            if(cnt[i] < main_cnt) pen[i] = 1e7;
        }
        sort(pen.begin(), pen.end());
        auto x = lower_bound(pen.begin(), pen.end(), main_pen);
        cout << (x - pen.begin()) + 1 << endl;
    }
	return 0; 
} 