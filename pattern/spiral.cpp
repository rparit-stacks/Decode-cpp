#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 1; i<=num; i++)
    {
        for(int j = 1; j <=num ; j++)
        if(i==1 || j == 1)cout<<1;
        else cout<<j;

        cout<<endl;
    }
}