#include <iostream>
using namespace std;
int main()
{
    string s; getline (cin,s);
	int T = 0, E = 0, N = 0;
	for (int i = 0; i < s.length(); i++)
    {
		if(s[i]=='T')T++;
		if(s[i]=='E')E++;
		if(s[i]=='N')N++;
	}
	cout << "T = " << T << endl
         << "E = " << E << endl
         << "N = " << N << endl;

    int min = T;
    if ((E/2) < min) min = E/2;
    if (N < min) min = N;

    cout << "TEEN = "<< min;

	return 0;
}
