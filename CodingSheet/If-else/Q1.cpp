// Write a Program to Check Whether Number is Even or Odd



#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    
    return 0;
}