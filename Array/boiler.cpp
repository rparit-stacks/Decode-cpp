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


}