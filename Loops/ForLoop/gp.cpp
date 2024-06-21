#include<iostream>
using namespace std;

int main()
{
    int a, count =1 ;

    cout<<"Enter A number : ";
    cin>>a;

    for(int i = 1; i<=a; i++)
    {
        cout<<count<<endl;
        count = count * 2;

    }
        
    return 0;
}