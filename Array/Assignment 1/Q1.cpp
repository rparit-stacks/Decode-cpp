//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int n,m,temp=1;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    //for input the element of the array
    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter the element of array "<<i<<" : ";
        cin>>arr[i];
        temp = temp * arr[i];
    }
    cout<<endl<<"The Product of the element of the array is : "<<temp;
    cout<<endl;

}