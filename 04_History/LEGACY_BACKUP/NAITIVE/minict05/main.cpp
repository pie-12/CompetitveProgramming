#include <iostream>
#include <string>
#include <set>
#define ll long long
#define ld long double
using namespace std;

int dem(string s, string x)
{
    int cnt = 0;
    int size = x.size();
    for (int i = 0; i < x.size(); i++)
        if (x[i] != s[i]) cnt++;
    return min (cnt,size-cnt);
}
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        string s;
        cin >> s;
        string x;
        set<int>v;
        for (int i = 0; i < s.size(); i++)
            x += '0';
        for (int i = 0; i < s.size(); i++)
        {
            v.insert(dem(s,x));
            x[i]='1';
        }
        cout << *v.begin() << '\n';
        n--;
    }


    return 0;
}


