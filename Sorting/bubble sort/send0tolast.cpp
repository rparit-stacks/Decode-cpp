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

    int arr[] = {7,4,9,0,7,5,3,0,0,5,6,3};

    int size = sizeof(arr)/sizeof(arr[0]);

    

    for(int i=0 ; i<size-1; i++){
            for(int j=i+1; j<size; j++){
                   if(arr[i] == 0 && arr[j]>0)
                   {
                     swap(arr[i],arr[j]);
                   }
            }
    }

    display(arr, size);
}