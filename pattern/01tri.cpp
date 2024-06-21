#include<iostream>
using namespace std;

int main()
{
    int m,i;
    int n;

    cout<<"Enter  a number ";
    cin>>m;

    
    for(i = 1 ; i <= m ; i++)
    {
        for(int j = 1; j<=i ; j++)
        {
            n = i+j;
            if(n%2 == 0) cout<<1;
            else cout<<0;
            
        }
        cout<<endl;
    }
       
    return 0;
}
