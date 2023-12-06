#include<iostream>
using namespace std;


void display (int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {
    
    int arr[9] = {2,2,2,0,0,0,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, mid = 0, high = n-1;


   while(mid<=high) {

    if(arr[mid]==2)
    {
        int temp = arr[mid];
        arr[mid] = arr[high];
        arr[high] = temp;
        high--;
    }

    else if( arr[mid] == 0)
    {
        int temp = arr[mid];
        arr[mid] = arr[low];
        arr[low] = temp;
        mid++;
        low++;
    }

    else mid++;

   }

   display(arr, n);
}

