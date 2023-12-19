#include<iostream>
#include<vector>

using namespace std;

void display(int *arr, int size)
{

     for(int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
}


int main()
{

    int arr[] = {1,2,8,3,4,5,6,7,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);
    int flag=0;

    for(int i = 0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            cout<<"Array is not sorted";
            flag=1;
            break;
        }

    }

    if(flag <= 0) cout<<"The arry is sorted";


}