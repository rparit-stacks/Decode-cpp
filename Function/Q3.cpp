//Q3: Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;

void odd_numbers(int x, int y)
{
    for(int i = x; i<=y; i++)
        if(i%2!=0) cout<<i<<endl;

}

int main()
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    odd_numbers(a,b);
}