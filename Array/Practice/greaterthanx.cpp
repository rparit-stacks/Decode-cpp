#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the numbersof element: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<"Enter the number : ";
    cin>>x;
    int count = 0;
    for(int i = 0; i <= n-1; i++)
    {
        if(x<arr[i]) count++;
    }
    cout<<endl<<"There are "<<count<<" element greater then "<<x;
 

}