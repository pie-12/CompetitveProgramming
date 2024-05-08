#include <iostream>
#include <cmath>
using namespace std;
float a,b,c;
int main ()
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a != 0) {
	 	if (a != 1 && a != -1) {
			cout << "Phuong trinh co dang: " << a << "x^2";
	    } 
	    if (a == 1) {
			cout << "Phuong trinh co dang: " << "x^2";
	    } 
	    if (a == -1) {
			cout << "Phuong trinh co dang: " << "-x^2";
	    } 
		if (b>0 && b!=1) {
			cout << "+" << b << "x";
		} 
		if (b<0 && b!=-1) {
			cout << b << "x";
		} 
		if (b==1) {
			cout << "+x";
		} 
		if (b==-1) {
			cout << "-x";
		}
		if (c>0) {
			cout << "+" << c << "=0" << endl;
		} 
		if (c<0) {
			cout << c << "=0" << endl;
		} 
		cout << "Delta = " << b << "*" << b << "-" << 4 << "*" << a << "*" << c << " = " << b*b-4*a*c << endl;
		if (b*b-4*a*c > 0) {
			cout << "Vi delta > 0 nen phuong trinh co 2 nghiem phan biet" << endl;
			cout << "Nghiem thu nhat cua phuong trinh la: " << (-b-sqrt(b*b-4*a*c))/2*a << endl;
			cout << "Nghiem thu hai cua phuong trinh la: " << (-b+sqrt(b*b-4*a*c))/2*a;
			} else if (b*b-4*a*c < 0) {
			cout << "Vi delta < 0 nen phuong trinh vo nghiem";
			} else {
				cout << "Vi delta = 0 phuong trinh co nghiem kep x1 = x2 = " << -b/2*a;
				}
		}
	if (a==0) {
		if (b==0 && c==0) {
			cout << "Phuong trinh co dang: " << "0x=0 (Luon dung)" << endl;
			cout << "Vay phuong trinh da cho co vo so nghiem";
		}
		if (b==0 && c!=0) {
			cout << "Phuong trinh co dang: " << "0x=" << -c << " (Vo ly)" << endl;
			cout << "Vay phuong trinh da cho vo nghiem";
		}
		if (b!=0) {
			cout << "Phuong trinh co nghiem duy nhat la: " << -c/b << " (Tu giai di phuong trinh bac nhat ma ban, neu la -0 thi tu sua la 0 di)";
			}
			}
	}
		
		
		
		
