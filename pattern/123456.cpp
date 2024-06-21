#include<iostream>
using namespace std;

int main()
{
    int m,n=1;

    cout<<"Enter  a number ";
    cin>>m;
    
    for(int i = 1 ; i <= m ; i++)
    {

        for(int j = 1 ; j <= i ; j++)
        {

            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
       
    return 0;
}
