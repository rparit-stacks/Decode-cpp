#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int flag=num;

    for(int i = 1; i<=num; i++)
    {
        for(int j = 1; j <= flag; j++)
        {
            cout<<j<<" ";
        }
        flag--;
        cout<<endl;
    }

    return 0;
}