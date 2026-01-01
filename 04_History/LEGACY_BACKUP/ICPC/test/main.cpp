//pie12 です
#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
#define ll long long
#define ull unsigned long long
#define ld long double
#define endl '\n'
#define PI 3.1415926535897932384626433832795
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define pb push_back
#define fi first
#define se second
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define time cerr << "Time run: " << (1000 * clock() / CLOCKS_PER_SEC) << " ms\n";
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define F0R(i, a) for(int i = 0; i < a; i++)
#define SET(A, n) memset(A, n, sizeof(A))

const int MAX_N = 1e5 + 5;
const ll INF = LLONG_MAX;

struct Dog {
    int weight, intelligence, utility;
};

bool compare(Dog a, Dog b) {
    // Sắp xếp tăng dần theo trọng lượng, nếu trọng lượng bằng nhau thì giảm dần theo trí thông minh
    if (a.weight == b.weight) return a.intelligence > b.intelligence;
    return a.weight < b.weight;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast

    int n;
    cin >> n;
    vector<Dog> dogs(n);

    // Nhập dữ liệu cho từng con chó săn
    F0R(i, n) {
        cin >> dogs[i].weight >> dogs[i].intelligence >> dogs[i].utility;
    }

    // Sắp xếp chó săn theo trọng lượng tăng dần, trí thông minh giảm dần nếu trọng lượng bằng nhau
    sort(all(dogs), compare);

    // Khởi tạo mảng dp
    vector<int> dp(n, 0);

    // Quy hoạch động để tìm tổng giá trị thị trường tối đa
    int max_utility = 0;
    F0R(i, n) {
        dp[i] = dogs[i].utility;  // Giá trị ban đầu là giá trị thị trường của chính con chó đó
        F0R(j, i) {
            // Kiểm tra điều kiện về trí thông minh
            if (dogs[j].intelligence >= dogs[i].intelligence) {
                dp[i] = max(dp[i], dp[j] + dogs[i].utility);
            }
        }
        max_utility = max(max_utility, dp[i]);
    }

    // In ra kết quả
    cout << max_utility << endl;

    time
    return 0;
}
