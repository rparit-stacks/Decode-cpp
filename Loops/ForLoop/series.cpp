#include<iostream>
using namespace std;

int main()
{
    int a, sum = 0;
    cout<<"Enter a number";
    cin>>a;

    //1-2+3-4+5-6....n
    for(int i = 1; i <= a; i++)
    {
        // if(a%2 != 0) sum = i - sum;
        // else sum = sum + i;
        
        cout<<i;
        if(i != a && i%2 == 0) 
        {
            sum = sum - i;
            cout<<" + ";
        }
        else if (i != a && i%2 != 0) 
        {
            sum = sum + i;
            cout<<" - ";
        }
        
    }
    cout<<" = "<<sum; 
}