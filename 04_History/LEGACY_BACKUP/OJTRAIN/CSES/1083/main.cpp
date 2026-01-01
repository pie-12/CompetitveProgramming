#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int,int> mp;
	for (int i = 0; i < n - 1; i++){
		int temp;
		cin >> temp;
		mp[temp]++;
	}
	auto it = mp.find(0);
    cout << it->first;
}
