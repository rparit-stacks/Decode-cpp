#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter  a number ";
    cin>>m;
    
    for(int i = 1 ; i <= m ; i++)
    {
        for(int j = 65 ; j <= i+64 ; j++)
        {
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
       
    return 0;
}
