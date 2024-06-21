//Write a C++ program that reads a number from the user using `cin`, and then display both the pre-incremented and pre-decremented values of the number using `cout`.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;

    ++a;
    --b;
    cout<<a<<"\n"<<b;






    return 0;
}

