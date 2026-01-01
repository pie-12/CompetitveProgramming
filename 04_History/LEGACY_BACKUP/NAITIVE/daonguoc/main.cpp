#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Nhap du lieu :";
    getline(cin,s);
    int dem1=0;
    int dem2=0;
    int dem3=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='N')
        dem1=dem1+1;
        if (s[i]=='E')
        dem2=dem2 +1;
        if (s[i]=='T')
        dem3=dem3+1;
    }
    if (dem2%2!=0)
    dem2=dem2 - 1;
    cout <<"T="<<dem3<<"";
    cout <<" E="<<dem2<<"";
    cout << " N="<<dem1<<"";
    if (dem3 >= dem2/2 && dem1 >= dem2/2)
    cout << " TEEN="<<dem2/2<<"";
    if (dem3<dem2/2&&dem1<dem2/2&&dem3<=dem1)
    cout << " TEEN="<<dem3<<"";
    if (dem3<dem2/2&&dem1<dem2/2&&dem1<dem3)
    cout << " TEEN="<<dem1<<"";
    if (dem1==dem2/2==dem3)
    cout << " TEEN="<<dem1<<"";
    if (dem3>=dem2/2&&dem1<dem2/2)
    cout << " TEEN="<<dem1<<"";
    if (dem1>=dem2/2&&dem3<dem2/2)
    cout << " TEEN="<<dem3<<"";
}
