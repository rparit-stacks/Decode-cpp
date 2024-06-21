#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter A number to print table";
    cin>>a;

    for(int i = 1; i <= 10; i++)
    {
        cout<<a<<" x "<<i<<"= "<<a * i<<endl;
    }
    return 0;
}