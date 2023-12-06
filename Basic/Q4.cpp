//Ques: WAP to find the circumference of a circle with radius 10 in C++.

#include<iostream>
using namespace std;
int main() 
{
    float r,c;
    cout<<"Enter the Radius of the Circle : ";
    cin>>r;
    float M = 2*3.14*r;
    cout<<"The Circumference is "<<M;
    return 0;
}