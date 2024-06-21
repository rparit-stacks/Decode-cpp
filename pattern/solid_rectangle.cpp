#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter Rows and coloumb ";
    cin>>m>>n;
    if(m<n)
    {
        for(int i = 1 ; i <= m ; i++)
        {
            for(int j =1; j <= n ; j++)
            cout<<" * ";
            cout<<endl;
        }
       
    }

    return 0;
}