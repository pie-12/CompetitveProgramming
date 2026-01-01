#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    string dk5 = "!@#$%^&*()-+";
    int dk[10];
    for (int i = 1; i <= 6; i++)dk[i] = 0;
    dk[6]=1;
    if(s.size()>=8)dk[1]=1;
    for (int i = 0; i < s.size(); i++){
        if(s[i]>='A'&&s[i]<='Z')dk[2]=1;
        else if(s[i]>='a'&&s[i]<='z')dk[3]=1;
        else if(s[i]>='0'&&s[i]<='9')dk[4]=1;
        else if(dk5.find(s[i])!=-1)dk[5]=1;
        else {cout << "NO"; return 0;}
        if(s[i]==s[i+1]&&i<s.size()-1)dk[6]=0;
    }

    for (int i = 1; i<= 6; i++){
        if (dk[i]==0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
