//Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;

float circle_area(float x)
{
    x = 3.14159 * x * x;
    return x;
}
int main()
{
    float a;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"The area of circle with radius "<<a<<" is : "<<circle_area(a);
    
    
    return 0;
}
