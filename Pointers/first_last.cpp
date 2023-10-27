#include<iostream>
using namespace std;

void num_engine(int* x)
{
    int last;
    last = *x%10;
    while(*x > 9)
    {
        *x = *x/10;
    }
    cout<<"first value is : "<<*x<<endl<<"Last value is : "<<last;
}
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    num_engine(&x);
}