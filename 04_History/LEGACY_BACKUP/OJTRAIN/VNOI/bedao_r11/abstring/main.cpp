#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define t -1
using namespace std;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin >> n;
	string s;
	cin >> s;

	if (s.find("aba")==s.rfind("aba"))
    {cout << "aba"; return 0;}
	while (s.find("aba")!= t){
        int x = s.find("aba");
        s[x] = 'c';
	}

	int cnt = 0;
	vector <pair<float,string>> v;
	string ss = s;
	while(s.find('c')!=t){
        for (int i = 0; i < s.size(); i++)
            if (s[i]=='c')cnt++;
        int z = (s.rfind('c')+2+1) - (s.find('c'));

        v.push_back({(1.0*cnt/z),s});
        s[s.find('c')]='!';
        cnt = 0;
	}

	s = ss;
	while(s.find('c')!=t){
        for (int i = 0; i < s.size(); i++)
            if (s[i]=='c')cnt++;
        int z = (s.rfind('c')+2+1) - (s.find('c'));

        v.push_back({(1.0*cnt/z),s});
        s[s.rfind('c')]='!';
        cnt = 0;
	}

    sort(v.begin(),v.end(),greater<pair<float,string>>());

    float best = v[0].first;

    vector <string> ans;
    for (auto x: v){
        if (x.first != best)break;
        string sss = x.second.substr(x.second.find('c'),(x.second.rfind('c')+2)-x.second.find('c')+1);
        ans.push_back(sss);
    }


    for (auto &x: ans){
        for (int i = 0; i < x.size(); i++)
            if (x[i]=='c') x[i] = 'a';
    }

    sort(ans.begin(),ans.end());
    cout << ans[0];
/*
5
ababa
0.4 cbcba
0.4 cbcba
0.333333 cb!ba
0.333333 !bcba
*/


	return 0;
}
