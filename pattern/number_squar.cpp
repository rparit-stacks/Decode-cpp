#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter  a number ";
    cin>>m;
        for(int i = 1 ; i <= m ; i++)
        {
            for(int j =1; j <= m ; j++)
            cout<<" "<<j<<" ";
            cout<<endl;
        }
        cout<<endl;
        
           for(int i = 1 ; i <= m ; i++)
        {
            for(int j =1; j <= m ; j++)
            cout<<" "<<i<<" ";
            cout<<endl;
        }
       
    return 0;
}
