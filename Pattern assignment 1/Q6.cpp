#include<iostream>
using namespace std;

int main(){

    int l,b;
    cout<<"Enter a Length: ";
    cin>>l;
    cout<<"Enter a width: "<<endl;
    cin>>b;

    for(int i = 1; i<=l; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            if(i==1 || i == l || j == 1 || j == b)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}