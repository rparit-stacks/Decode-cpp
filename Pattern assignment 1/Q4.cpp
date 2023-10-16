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
            if(i%2 == 0) cout<<(char)flag<<" ";
            else cout<<j<<" ";
            flag++;
        }
        cout<<endl;
    }

    return 0;
}