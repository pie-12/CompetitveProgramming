#include <iostream>
using namespace std;
int main ()
{
    string a;
    getline(cin,a);
    int T = 0;
    int E = 0;
    int N = 0;
    for (int i=0;i<a.length();i++)
    {
        if (a[i]=='T'){T+=1;}
        if (a[i]=='E'){E+=1;}
        if (a[i]=='N'){N+=1;}
    }
    int min;
    min = (T <= (E/2) && T <= N)? T : (N<=(E/2)?:(E/2));


    cout << "T = " << T << endl;
    cout << "E = " << E << endl;
    cout << "N = " << N << endl;
    cout << "TEEN = "<< min;

    return 0;
}
