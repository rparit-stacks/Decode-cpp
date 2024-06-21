#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter  a number ";
    cin>>m;
    n=m;
    
    for(int i = 1 ; i <= m ; i++)
    {
        
        for(int j = 1 ; j <= n-1 ; j++)
        {
            cout<<" "<<" ";
        }

        for(int j = 1 ; j <= i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        n--;
    }
       
    return 0;
}
