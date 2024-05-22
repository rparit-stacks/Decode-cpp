// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

#include <iostream>
using namespace std;

int addodd(int i, int j)
{
    int sum = 0;
    if (i % 2 != 0 && i <= j)
        sum = i + addodd(i + 2, j);
    else
        return sum;
}

int main()
{
    cout << addodd(1, 10);
    return 0;
}
