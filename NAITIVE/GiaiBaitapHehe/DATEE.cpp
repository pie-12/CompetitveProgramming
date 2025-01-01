#include <bits/stdc++.h>
using namespace std;

string Au(string s)	//dd.mm.yyyy
{
	int a = s.find("/", 0);
	int b = s.rfind("/", s.length());
	s.replace(a, 1, ".");
	s.replace(b, 1, ".");
	return s;
}
string My(string s)  //mm/dd/yyyy
{
	int a = s.find(".", 0);
	int b = s.rfind(".", s.length());
	s.replace(a, 1, "/");
	s.replace(b, 1, "/");
	return s;
}

string zero(string s)
{
	if (s.find("/") != -1){
		int a = s.find("/", 0);
		int b = s.rfind("/", s.length());
		if (a == 1)
			s.insert(0, "0");
		if (b - a == 2)
			s.insert(a+1, "0");
	}
	if (s.find(".") != -1){
		int a = s.find(".", 0);
		int b = s.rfind(".", s.length());
		if (a == 1)
			s.insert(0, "0");
		if (b - a == 2)
			s.insert(a+1, "0");
	}
	return s;
}

int main()
{
	int n;
	string s;

	cin >> n;
	for (int i = 0; i <= n-1; i++){
		cin >> s;
		if (s.find("/") != -1)
			cout << zero(Au(s)) << " "<< zero(s) << endl;
		if (s.find(".") != -1)
			cout << zero(s) << " " << zero(My(s)) << endl;
	}
	return 0;
}

