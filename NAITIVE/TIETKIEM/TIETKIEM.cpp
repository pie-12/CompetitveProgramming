#include <iostream>
#include <string>
using namespace std;
int main () {
	int sumT(0),sumE(0), sumN(0), sum(0), t, e, n;
	char c1 = 'T', c2 = 'E', c3 = 'N';
    string str1;
    getline (cin, str1);
    for (int i=0;i<str1.length();i++) {
    	if (str1[i] == c1) sumT++;
    	if (str1[i] == c2) sumE++;
    	if (str1[i] == c3) sumN++;
    	}
    	t = sumT;
    	e = sumE;
    	n = sumN;
    for (int i=0;i<str1.length();i++) {
	if ((sumT-1)>=0 && (sumE-2)>=0 && (sumN-1)>=0) {
	sum++;
	sumT-=1;
	sumE-=2;
	sumN-=1;
	}
	}
	cout << "T = " << t << "\nE = " << e << "\nN = " << n;
	cout << "\nTEEN = " << sum;
}
