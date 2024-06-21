#include<iostream>
using namespace std;

int main()
{
    int a, count = 0;

    cout<<"Enter A number : ";
    cin>>a;

    for(int i = 2 ; i < a ; i++)
    {
        if(a%i == 0) 
        {
            count++;
            break;
        }
    }

    if(count>0)
    cout<<a<<" Is a composite number";
    else if (count == 0)                        
    cout<<a<<" Is a  prime number";

        
    return 0;
} 