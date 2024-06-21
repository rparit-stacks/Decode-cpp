#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int num = 1;
    cout<<"Enter the number of elements:";
    cin>>n;

    while(i <= n)
    { 
        cout<<num*2<<endl;
        if(num == 1) num = num + 1;
        else num = num + 2;
        i++;
    }
    return 0;
}