#include<iostream>
using namespace std;

int main()
{
    int x, count, sum = 1;

    cout<<"Enter a number ";
    cin>>x;
    for(int i = 1 ; x>0 ; i++)
    {
        count = x%10;
        if(count == 0)
        continue;
        sum = sum * count;
        x=x/10;

    }
    cout<<sum;
        
    return 0;
}