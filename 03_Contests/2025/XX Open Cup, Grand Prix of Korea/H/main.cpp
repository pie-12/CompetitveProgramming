/**
 * author:  pie-12 (◕‿◕)
 * created: 02.11.2025 10:19:40
**/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll count(const vector<int>& v) {
    ll dem = 0; 
    int n = v.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                dem++;
            }
        }
    }
    return dem;
}

ll build_and_count(int n, const vector<int>& a, const vector<int>& a_target) {
    vector<int> pos_move(n + 1);
    for (int i = 0; i < n; i++) pos_move[a_target[i]] = i;
    vector<int> p(n);
    for (int i = 0; i < n; i++) p[i] = pos_move[a[i]];
    return count(p);
}

ll get_sum(int n, const vector<int>& a_target, const vector<int>& b) {
    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += abs(a_target[i] - b[i]);
    }
    return total_sum;
}


ll compute(int n, const vector<int>& a, const vector<int>& b, int k) {
    
    vector<int> a_nho;
    vector<int> a_lon;
    
    for (int i = 0; i < n; i++) {
        if (a[i] <= k) a_nho.push_back(i);
        else a_lon.push_back(i);
    }

    vector<int> b_nho;
    vector<int> b_lon;
    
    for (int i = 0; i < n; i++){
        if (b[i] <= k) b_nho.push_back(i);
        else b_lon.push_back(i);
    }

    if (n % 2 == 0) {
        if (a_nho.size() != b_lon.size()) return LLONG_MAX;

        vector<int> a_target(n);
        for (int i = 0; i < a_nho.size(); i++) a_target[b_lon[i]] = a[a_nho[i]];
        for (int i = 0; i < a_lon.size(); i++) a_target[b_nho[i]] = a[a_lon[i]];
        
        return build_and_count(n, a, a_target);
    }

    ll min_swaps_for_this_max_sum = LLONG_MAX;
    ll max_sum_for_this_k = -1; 

    int m = n / 2;

    if (a_nho.size() == m) { 
        for (int i = 0; i <= m; i++) { 
            for (int j = 0; j <= m; j++) { 
                vector<int> a_target(n);
                
                int a_lon_sacrificed_idx = i;
                int a_lon_remaining_idx = 1 - i;
                
                int b_lon_receiver_idx = j;
                int b_lon_remaining_idx = 1 - j;
                
                a_target[b_nho[0]] = a[a_lon[a_lon_sacrificed_idx]];
                a_target[b_lon[b_lon_receiver_idx]] = a[a_nho[0]];
                a_target[b_lon[b_lon_remaining_idx]] = a[a_lon[a_lon_remaining_idx]];
                
                ll current_sum = get_sum(n, a_target, b);
                ll current_swaps = build_and_count(n, a, a_target);

                if (current_sum > max_sum_for_this_k) {
                    max_sum_for_this_k = current_sum;
                    min_swaps_for_this_max_sum = current_swaps;
                } else if (current_sum == max_sum_for_this_k) {
                    min_swaps_for_this_max_sum = min(min_swaps_for_this_max_sum, current_swaps);
                }
            }
        }
    } else { 
        for (int i = 0; i <= m; i++) { 
            for (int j = 0; j <= m; j++) { 
                vector<int> a_target(n);
                
                int a_nho_remaining_idx = i;
                int a_nho_sacrificed_idx = 1 - i;
                
                int b_nho_receiver_idx = j;
                int b_nho_remaining_idx = 1 - j;
                
                a_target[b_nho[b_nho_receiver_idx]] = a[a_lon[0]];
                a_target[b_lon[0]] = a[a_nho[a_nho_remaining_idx]];
                a_target[b_nho[b_nho_remaining_idx]] = a[a_nho[a_nho_sacrificed_idx]];
                
                ll current_sum = get_sum(n, a_target, b);
                ll current_swaps = build_and_count(n, a, a_target);

                if (current_sum > max_sum_for_this_k) {
                    max_sum_for_this_k = current_sum;
                    min_swaps_for_this_max_sum = current_swaps;
                } else if (current_sum == max_sum_for_this_k) {
                    min_swaps_for_this_max_sum = min(min_swaps_for_this_max_sum, current_swaps);
                }
            }
        }
    }
    return min_swaps_for_this_max_sum;
}


void solve() 
{
    int n;
    cin >> n;

    vector<int> arr_a(n);
    vector<int> arr_b(n);
    for (int i = 0; i < n; i++) cin >> arr_a[i];     
    for (int i = 0; i < n; i++) cin >> arr_b[i];
    
    if (n == 1) {
        cout << 0 << '\n';
        return;
    }

    ll k1 = n / 2;
    ll ans1 = compute(n, arr_a, arr_b, k1);
    ll k2 = (n + 1)/ 2;
    ll ans2 = LLONG_MAX;      
    if (k1 != k2) ans2 = compute(n, arr_a, arr_b, k2);  
    else ans2 = ans1;

    cout << min(ans1, ans2) << '\n';
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("main.inp","r",stdin);
    freopen("main.out","w",stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    while (t--) solve();
    cerr << "Built at: "<< __DATE__ <<" " << __TIME__;
    return 0;
}