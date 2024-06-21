#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int r = a-1, l = a-1, flag = 1;

    for(int i = 1; i <= a; i++)
    {
        int t = 1;
        if(i==1)
        for(int j = 1; j<=(a*2)-1; j++){
            cout<<"*";
            t++;
        }

        else if(i>1)
        {
            int t = 1;
            for(int p = 1; p <= r; p++) cout<<"*";
            r--;
            for(int q = 1; q <= flag; q++) cout<<" ";
            flag+=2;
            for(int s = 1; s <= l; s++) cout<<"*";
            l--;
            t++;
        }
        
        cout<<endl;
    }
    return 0;
}