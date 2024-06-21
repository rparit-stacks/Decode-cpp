//Develop a C++ program that calculates the product of three numbers entered by the user using `cin`, and display the result using `cout`.
#include<iostream>
using namespace std;
int main()
{
    float l,b,h;
    cout<<"Enter three numbers : ";
    cin>>l>>b>>h;
    float product = l * b * h;

    cout<<product;

    return 0;
}
