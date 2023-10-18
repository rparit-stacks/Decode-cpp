//Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;

int square(int x)
{
    x = x*2;
    return x;
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    
    for(int i = 1; i<=a; i++)
    {
        cout<<"The square of "<<i<<" is : "<<square(i)<<endl;
    }
    return 0;
}
