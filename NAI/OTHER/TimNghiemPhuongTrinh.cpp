//Tim nghiem phuong trinh ax+b=0
#include <iostream>
#include <math.h>
using namespace std;
void nhap(int &a,int &b);
void xuat(int co,float x);
float timNghiem(int a,int b, float x);
int main()
{
	int a,b;
	float x;
	nhap(a,b);
	int co=timNghiem(a,b,x);
	xuat(co,x);
}
void nhap(int &a,int &b)
{
	cin>>a>>b;
}
void xuat(int co,float x)
{
	if (co==0)
	cout<<"Phuong trinh vo nghiem";
	else if (co==1)
	cout<<"Phuong trinh vo so nghiem";
	else cout<<x;
}
float timNghiem(int a,int b, float x)
{
	if (a==0&&b==0)
	return 1;
	else if (a==0)
	return 0;
	else
	{
		x=(float)-b/a;
		return 2;
	}
}
