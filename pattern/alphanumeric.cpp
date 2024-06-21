#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter a number ";
    cin>>m;
   
    
    for(int i = 1 ; i <= m ; i++)
    {
        int A = 65;
      for(int j = 1; j <= i ; j++)
      {
        
        if(i%2 != 0 ) cout<<j<<" ";
        else 
        {
            cout<<(char)A<<" ";
            A++;
        }
      }
      cout<<endl;
    }
       
    return 0;
}
