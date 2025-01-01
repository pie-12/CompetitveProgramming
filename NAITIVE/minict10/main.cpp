#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 1; i <= 3; i++)
        while (s.find(to_string(i))!=-1)
        {
            ans += to_string(i) + "+";
            s.erase(s.find(to_string(i)),1);
        }
    ans.erase(ans.size()-1,1);
    cout << ans;
    return 0;
}
