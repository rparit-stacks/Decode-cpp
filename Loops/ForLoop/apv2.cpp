#include<iostream>
using namespace std;

int main()
{
    int a,b=4,p;

    cout<<"Enter A number : ";
    cin>>a;

    cout<<"1. You want to get the value close to "<<a<<endl<<"2. or you want to get the number of terms wich is equal to "<<a<<endl;
    cin>>p;

    if(p==2)
    {
        for(int i = 1; i <= a; i++)
            {
                cout<<b<<endl;
                b=b+3;
            }
    }
    else
        for(int i = 4; i <= a; i=i+3)
                {
                    cout<<i<<endl;
                }
    
    return 0;
}