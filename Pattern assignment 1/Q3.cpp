#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
   

    for(int i = 1; i<=num; i++)
    {
        int flag=65;
        for(int j = 1; j <= i; j++)
        {
            cout<<(char)flag<<" ";
            flag++;
        }
        cout<<endl;
    }

    return 0;
}