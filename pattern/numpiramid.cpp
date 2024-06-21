#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int n = a-1;

    for(int i = 1; i<=a; i++)
    {
        for(int x = 1; x <= n; x++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<j<<" ";
        for(int y = i-1; y >= 1; y--) cout<<y<<" ";
        cout<<endl;
        n--;

       
    }
    

}