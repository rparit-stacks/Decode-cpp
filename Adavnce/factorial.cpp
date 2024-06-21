#include<iostream>
using namespace std;

int main()
{
    int x, fact = 1;

    cout<<"Enter a number ";
    cin>>x;
    for(int i = 1 ; i<=x ; i++)
    {
        fact = fact * i;
        cout<<"The Factorial of "<<i<<" is "<<" = "<< fact<<endl;

    }
        
    return 0;
}