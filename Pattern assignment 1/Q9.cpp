#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int flag = num, count = num-1, count1 = num-1, count3 = 1;

    // for(int i = 1; i<=num; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //  for(int i = 1; i<=num; i++)
    // {
    //      for(int k = 1; k <= flag-1; k++)
    //     {
    //         cout<<"*";
    //     }
    //     flag--;
    //     cout<<endl;
    // }
    
    for(int i = 1; i <= ((num*2)-1); i++)
    {
        if(i<=num) 
        {
            for(int j = 1; j <= i; j++) cout<<"*";
        }

        else if(i>num)
        {
            for(int k = 1; k<=flag-1; k++) cout<<"*";
            flag--;
        }
        int number = num + 1;    
        cout<<endl;
        count--;
    }
    
    return 0;
}