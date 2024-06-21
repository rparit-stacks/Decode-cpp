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
        char a = 'A';
        for(int j = 1; j<=x ; j++)
        {
          cout<<a;
          a++;
        }
        x--;
        cout<<endl;
    }
       
    return 0;
}
