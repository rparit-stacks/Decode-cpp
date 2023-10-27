//Given an array, predict if the array contains duplicates or not.
//The function should return true if duplicate elements are found in the array and false otherwise.

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
    int count = 0;
    for(int i = 0; i <= n-1; i++)
    {
        for(int j = i+1; j <= n-1; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
        if(count > 0) break;
    }
    if(count > 0) cout<<endl<<"The given array contain dublicate element ";
    else cout<<endl<<"The given array does not contain any dublicate element ";


}