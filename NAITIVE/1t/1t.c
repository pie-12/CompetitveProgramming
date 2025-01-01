#include <iostream>
using namespace std;
int main ()
{
   int N;
   double VAT,goc;
   cin>>N;
   goc=N*0.1;
   VAT=N-goc;
   cout <<goc<<" "<<VAT;


return 0;
}

