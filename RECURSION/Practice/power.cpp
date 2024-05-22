#include <iostream>
using namespace std;

int power_fun(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power_fun(a, b - 1);
}

int main()
{
    int a = 2;
    int b = 5;

    cout << power_fun(a, b);
}