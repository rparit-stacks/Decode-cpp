#include<iostream>
using namespace std;

int main()
{
    int x, count, sum = 0;

    cout<<"Enter a number ";
    cin>>x;
    for(int i = 1 ; x>0 ; i++)
    {
        count = x%10;
        sum = sum + count;
        x=x/10;

    }
    cout<<sum;
        
    return 0;
}