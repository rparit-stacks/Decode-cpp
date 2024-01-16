//Given an integer array and an integer k where k<=size of array, We need to return the kth
//smallest element of the array.


#include <iostream>
#include <vector>

using namespace std;
void display(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {-10, -5, -8, -2, -1};

    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    /* The code snippet you provided is implementing the insertion sort algorithm. */

    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    display(arr, size);

    cout<<"The kth last element is : "<<arr[k-1];



  
}