#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of element: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }

    for(int i = 0; i <= n-1; i++)
    {
        for(int j = i+1; j <= n-1; j++)
        {
            if(arr[i]+arr[j] == 6) cout<<i<<" "<<j;

        }
    }

}
