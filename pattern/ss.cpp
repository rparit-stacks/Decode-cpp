#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int n = a-1, flag = 1,flag2 = 1, m = 1 ;

    for(int i = 1; i<=(a*2)-1; i++)
    {
        if(i<=a)
        {
            for(int j = 1; j <= n; j++) cout<<" ";
            n--;
            for(int k = 1; k <= flag; k++ ) cout<<"*";
            flag = flag+2;
        }
        
        else if(i>a)
        {
            for(int l = 1; l <= m; l++) cout<<" ";
            m++;
            for(int o = 1; o <= flag-a; o++ ) cout<<"*";
            flag -=2;
           

        }
        
      cout<<endl;
    }

}