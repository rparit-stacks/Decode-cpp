//Implement a C++ program that takes two numbers as input from the user using `cin` and calculates their difference. If the result is negative, display a message using `cout` indicating that the difference is negative.
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<<"Enter a number : ";
    cin>>x>>y;

    if(x-y<0) cout<<"The number is negative";
    else cout<<"The number is positve";
    return 0;
}
