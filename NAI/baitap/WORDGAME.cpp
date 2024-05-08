#include <bits/stdc++.h>
using namespace std;

int noitu(string s[], int n)
{
    for (int i = 1; i < n; i++)
        if (s[i-1][s[i-1].length()-1]!= s[i][0]) {return -1;}
    return 1;
}
int kiemtra(string s[],int n)
{
    for(int i = 0;i<n;i++)
        {for (int j = n-1; j>i;j--)
            if (s[i]==s[j]){return -1;}}
    return 1;
}

int main ()
{
    int n ; cin >> n;
    string s[n];
    for (int i = 0; i<n ; i++)
    {
        cin >> s[i];
    }

    int kq1 = noitu(s,n);
    int kq2 = kiemtra(s,n);
    if (kq1==1&&kq2==1) cout << "YES";
    else cout << "NO";

    return 0;
}
