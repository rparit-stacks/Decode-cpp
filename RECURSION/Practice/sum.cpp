#include <iostream>
using namespace std;

int oneton(int n)
{
    int res = 0;
    if (n == 0)
        return 0;
    else
        return n + oneton(n - 1);
}

int main()
{
    cout << oneton(5);
}