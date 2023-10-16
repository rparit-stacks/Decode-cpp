#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
   

    for(int i = 1; i<=num; i++)
    {
        int flag = i;
        for(int j = 1; j <= i; j++)
        {
                
                cout<<flag<<" ";
                flag--;
        }
        cout<<endl;
    }

    return 0;
}