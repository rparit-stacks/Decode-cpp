#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter  a number ";
    cin>>m;
    int x = m;
    for(int i = 1 ; i <= m ; i++)
    {
        for(int j = 1; j<=x ; j++)
        {
          cout<<j;
          
        }
        x--;
        cout<<endl;
    }
       
    return 0;
}
