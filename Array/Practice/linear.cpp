#include<iostream>
using namespace std;
int main()
{
    int n,m,temp=0;
    cout<<"Enter the size od array: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    //for input the element of the array
    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter the element if array "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the element you want to find in the array : ";
    cin>>m;
    for(int j = 0; j <= n-1; j++)
    {
       if(arr[j] == m){
        cout<<endl<<"The number is placed on index : "<<j;
        temp++;
       }
    }
    if(temp==0) cout<<"The element "<<m<< " is not in the array";
}
     