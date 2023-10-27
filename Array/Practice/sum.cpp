#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"Enter the number of Student: ";
    cin>>n;
    cout<<endl;
    int sum[n];

    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>sum[i];
    }
    cout<<endl;
    for(int i = 0; i<=n-1; i++)
    {
        temp = temp + sum[i];
    }
    cout<<"The sum of all the element of array is : "<<temp;
}
     