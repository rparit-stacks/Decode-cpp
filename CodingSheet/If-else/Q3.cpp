// 3) Write a Program to Find Largest Number Among Three
// Numbers entered by users

#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 91;
    int c = 20;

    if (a > b && a > c)
        cout << "The largest number is :" << a;
    else if (b > a && b > c)
        cout << "The largest number is :" << b;
    else
        cout << "The largest number is :" << c;
}