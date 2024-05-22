#include <iostream>
using namespace std;

int oneton(int i, int n)
{
    if (i > n)
        return 0;
    cout << i << endl;
    oneton(i + 1, n);
}

int main()
{
    oneton(1, 5);
}