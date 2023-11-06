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
    bool flag = false;
    for(int i = 0; i<=n-1; i++)
    {
        if(arr[i]!=i+1)
        {
            flag = true;
            cout<<i+1;
            break;
        }
    }
        if(flag == false) cout<<"The array does not have any smallest positive number";

}