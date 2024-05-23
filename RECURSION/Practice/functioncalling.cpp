#include <iostream>
using namespace std;

int factorial(long long num)
{
    long long n = 1;
    if (num == 0)
        return n;
    else
        n = num * factorial(num - 1);
}

int main()
{
    long long num = 15;

    cout << factorial(num);
}