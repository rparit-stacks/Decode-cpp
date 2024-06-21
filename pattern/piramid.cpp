#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter a number ";
    cin>>m;
    n=m;
    
    for(int i = 1 ; i <= m ; i++)
    {
        
        for(int j = 1 ; j <= n-1 ; j++)
        {
            cout<<" "<<" ";
        }
        
         for(int k = 1 ; k <= i-1 ; k++)
        {
            cout<<"*"<<" ";
        }
        

         for(int l = 1 ; l <= i ; l++)
        {
            cout<<"*"<<" ";
        }
        n--;
        cout<<endl;
    }
       
    return 0;
}
