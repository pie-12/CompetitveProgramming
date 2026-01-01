#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
set <int> s;
vector <int> v;
multimap <int,int> mp;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    int key;
    for(int i = 0; i < n; i++){
        cin >> key;
        s.insert(key);
        mp.insert({key,i});
    }
    for (auto x: s)
        v.push_back(x);
    int cnt = 0;
    for (int i = 0; i < v.size()-1; i++)
        for (int j = i + 1; j < v.size(); j++){
            if (v[i]+v[j]*v[j]==k){
                for (auto itj = mp.find(v[j]); (*itj).first == v[j]; itj++)
                for (auto iti = mp.find(v[i]); (*iti).first == v[i]; iti++)
                    if ((*iti).second < (*itj).second)cnt++;
            }
            else if (v[j]+v[i]*v[i]==k){
            for (auto iti = mp.find(v[j]); (*iti).first == v[j]; iti++)
            for (auto itj = mp.find(v[i]); (*itj).first == v[i]; itj++){
                    if ((*itj).second > (*iti).second)cnt++;

            }
                }
        }
    cout << cnt;

    return 0;
}
