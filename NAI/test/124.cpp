#include <iostream>
using namespace std;

    void update(int &balance, int change)
    {
        balance +=change;
    }
    int main ()
    {
        int total = 1000;
        update (total, 2000);
        cout << total;

        return 0;
    }



