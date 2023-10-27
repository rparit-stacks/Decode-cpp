//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;

int product(int* p, int* q)
{
    return *p*(*q);
}
int main()
{
    int m,n;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>n;
    cout<<product(&m,&n);


}
