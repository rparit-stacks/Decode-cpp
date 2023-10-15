//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num, last, sum = 0;
    cout<<"Enter any integer: ";
    cin>>num;

    for(int i = 1; num > 0; i++)
    {
        last = num%10;
        num = num/10;
        if (last % 2 == 0)
        sum = sum + last;
    }
    cout<<sum;
    return 0;
}