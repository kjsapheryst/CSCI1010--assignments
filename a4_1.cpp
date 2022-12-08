#include <iostream>
using namespace std;

int main()
{
    int n = 1234567;
    int m = 0;
    while( n != 0)
    {
        m = (10 *m) + (n % 10);
        n = n / 10;
    }

    cout << m << " " << n << endl;
}