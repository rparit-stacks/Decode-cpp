//Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;

int main()
{
    int p,b,h;
    cout<<"Enter lenght breath and height of the triangle : ";
    cin>>p>>b>>h;

    if(h*h == p*p + b*b) cout<<"Triangle is Equilateral";
    else cout << "Triangle is not Equilateral";
    return 0;
}