//Build a C++ program that reads two numbers using `cin`, calculates their division result, and displays both the quotient and remainder using `cout`.
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter two numbers : ";
    cin>>l>>b;

    int remainder = l%b;
    float quotient = l/b;
    

    cout<<remainder<<endl<<quotient;

    return 0;
}