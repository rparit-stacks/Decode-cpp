#include<iostream>
using namespace std;

int main()
{
    int x, count = 0;

    cout<<"Enter a number ";
    cin>>x;
    for(int i = 1 ; x>0 ; i++)
    {
        x=x/10;
        // count++;
    }
    cout<<count;
        
    return 0;
}