// 5) Write a Program to Check whether a year entered by
// user is Leap Year or not
#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter the Year : ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "this year is leap year";
    }
    else
    {
        cout << "this year is not leap year";
    }
}