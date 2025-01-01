#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec = vector<int>({'a', 'c', 'b', 'a', 'd', 'c', 'a'});

    map<char,int> cnt;

    // dem so luong
    for (int i = 0; i < (int) vec.size(); i++) {
        cnt[vec[i]]++;
    }

    // in map
    for (map<char,int>::iterator it = cnt.begin(); it != cnt.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }
    cout << '\n';

    // giam gia tri cua 'a' di 2
    cnt['a'] -= 2;

    // tang gia tri cua 'c' len 1
    cnt['c']++;

    // xoa 'd' khoi map
    cnt.erase('d');

    // them 'e' voi gia tri 4 vao map
    cnt.insert(pair<char,int>('e', 4));


    cout << "Sau khi thay doi: " << '\n';
    for (map<char,int>::iterator it = cnt.begin(); it != cnt.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }
    cout << '\n';
}
