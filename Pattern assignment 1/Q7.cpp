#include<iostream>
using namespace std;

int main(){

    int l,b;
    cout<<"Enter a Length: ";
    cin>>l;
    int num = l-1;


    for(int i = 1; i<=l; i++)
    {
        for(int k = 1; k <= num; k++)
        {
            cout<<" ";
        }
        num--;
        for(int j = 1; j <= l; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}