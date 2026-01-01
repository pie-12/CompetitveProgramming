#include <bits/stdc++.h>

using namespace std;
bool comp (string a, string b){
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
int main (){
string a, b, c;
cin >> a >> b >> c;
vector <string> v;
v.push_back (a);
v.push_back (b);
v.push_back (c);

sort (v.begin(), v.end(), comp);
for (auto x : v){
    cout << x << " ";
}
return 0;
}


// sap xep dua theo phan tu thu 2 cua pair
bool cmp(pair <int, int> a, pair <int, int> b){
    return(a.second < b.second);
}

int main(){
        sort(a+1, a+n+1, cmp());
}
