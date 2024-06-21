#include<iostream>
using namespace std;

int main()
{
    int m,n=1;

    cout<<"Enter  a number ";
    cin>>m;
    int x = m-1;

    for(int i = 1; i <= (m*2)-1; i++)
    {
        for(int k =1; k<=x; k++) cout<<"   ";
        for(int j =1; j<= n; j++) cout<<" * ";

        if(i<m)
        {
            n+=2;
            x--;
        }
        else 
        { 
            n-=2;
            x++;
        }
        cout<<endl;
    }
}