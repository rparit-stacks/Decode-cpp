//Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbersof element: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }
    
        int largest = INT_MIN, sec_lar = INT_MIN;
    for(int i = 0; i <= n-1; i++)
    {
        if(largest<arr[i]) largest = arr[i];
        // if(sec_lar<arr[i] && arr[i] != largest) sec_lar = arr[i];

    }
    for(int i = 0; i <= n-1; i++)
    {
        if(sec_lar<arr[i] && arr[i] != largest) sec_lar = arr[i];
    }
    cout<<sec_lar;

}