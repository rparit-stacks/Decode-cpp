//Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
// or not? If greater return "The Perimeter is smaller" else return "The Area is bigger"

#include<iostream>
using namespace std;
int main() 
{
    int l,b;
    int a,p;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;

    a = l * b;
    p = 2 *(a+b);
    if(a > p)
    cout<<"The Area is bigger";
    else
    cout<<"The perimeter is Bigger.";
    return 0;
}


    