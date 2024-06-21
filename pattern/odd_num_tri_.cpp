#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter  a number ";
    cin>>m;
    
    for(int i = 1 ; i <= m ; i++)
    {
        n = 1;
        for(int j = 1; j<= i; j++)
        {
        
            cout<<n<<" ";
            n=n+2;
        }
        cout<<endl;
        
    }
       
    return 0;
}
