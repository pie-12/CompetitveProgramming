#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int dem = 0;
    for (int i = 0; i < s.size()-1; i++)
        if (s[i]=='.'&&s[i+1]!='.') dem++;
    if (s[0]!='.') dem++;
    cout << dem;
    return 0;
}
