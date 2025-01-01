#include <bits/stdc++.h>
using namespace std;
int check(string a, string b)
{
        int z = b.find(a[0]);


        int i = 1;
        while (1)
        {
            if (i == a.size()) return 1;
            if(a[i]!=b[z+i]) return 0;
            i++;
        }

}
int main ()
{
    string a;
    string b;
    cin >> a >> b;
    int ok ;
    int x, y;
    x = b.find(a[0]);
    y = b.rfind(a[0]);
    if (x!= y)
    {
        while (x!=y)
        {
            x = b.find(a[0]);
            y = b.rfind(a[0]);
            ok = check(a,b);

            if (ok == 1) break;
            b.erase(b.find(a[0]),1);

        }
        if (ok == 0) ok = check (a,b);
    }

    else
        {ok = check(a,b);}
    ok = check (a,b);
    if (ok == 1) {cout << "Yes";}
    else {cout << "No";}
    return 0;
}
