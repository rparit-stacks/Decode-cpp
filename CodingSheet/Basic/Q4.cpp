// 4) Write a program where the user is asked to enter two integers(divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter a number";
    cin >> n;
    cout << "Enter 2nd number";
    cin >> m;

    cout << "Remainder " << n%m<<endl;
    cout << "quotient "<<n/m;
}