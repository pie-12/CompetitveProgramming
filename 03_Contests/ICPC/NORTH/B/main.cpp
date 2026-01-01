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

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("main.inp","r",stdin);
        freopen("main.out","w",stdout);
    #endif
    fast

    int n;
    string s;
    cin >> n >> s;

    // Bước 1: Tính số lượng `0` liên tiếp bên trái của mỗi `1`
    vector<int> leftZeros(n, 0);
    int zeroCount = 0;
    F0R(i, n) {
        if (s[i] == '0') {
            zeroCount++;
        } else {
            leftZeros[i] = zeroCount;
            zeroCount = 0;
        }
    }

    // Bước 2: Tính số lượng `0` liên tiếp bên phải của mỗi `1`
    vector<int> rightZeros(n, 0);
    zeroCount = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '0') {
            zeroCount++;
        } else {
            rightZeros[i] = zeroCount;
            zeroCount = 0;
        }
    }

    // Bước 3: Tìm chuỗi "đẹp" dài nhất
    int maxLength = 0;
    F0R(i, n) {
        if (s[i] == '1') {
            // Số lượng `0` cân bằng ở bên trái và bên phải
            int balancedZeros = min(leftZeros[i], rightZeros[i]);
            // Độ dài chuỗi "đẹp" gồm `0` trái, `1` và `0` phải
            int currentLength = balancedZeros * 2 + 1;
            maxLength = max(maxLength, currentLength);
        }
    }

    cout << maxLength << endl;

    time
    return 0;
}
