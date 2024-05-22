#include <iostream>
#include <math.h>

using namespace std;

bool pot(int n)
{
    for (int i = 1; i <= n / 2; i++)
        if (pow(2, i) == n)
            return true;

    return false;
}

int main()
{
    cout << pot(4);
}   