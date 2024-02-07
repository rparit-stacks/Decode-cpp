//6) Write a Program to Swap Two Numbers

#include<iostream>

using namespace std;


int main()
{
    int a = 7;
    int b = 9;

    a = b-a;
    b = b-a;
    a = a+b;

    cout<<a<<endl;
    cout<<b;
}