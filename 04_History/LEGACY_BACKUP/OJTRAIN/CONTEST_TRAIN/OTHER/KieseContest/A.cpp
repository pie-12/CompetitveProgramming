#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	getline (cin, s);
	int cnt1 = 0, cnt2 = 0;
	string s1 = "aeiouy", s2 = "CLOWN";
	for (int i = 0; i < s.size(); i++){
        if (s1.find(s[i])!=-1)cnt1++;
        if (s2.find(s[i])!=-1)cnt2++;
        if (s[i]==' ' && cnt1 != 1) {cnt1 = 0; break;}
        if (s[i]==' ' && cnt1 == 1) cnt1--;

	}
    if (cnt1 != 1) {cout << "NO"; return 0;}
	(!cnt2) == 1 ? cout << "YES" : cout << "NO";
	return 0;
}
