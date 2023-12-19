#include <iostream>
#include <vector>

using namespace std;

int counter = 0;

void bubblesort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size-1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}

void isAlmostSorted(int *arr, int size)
{
    int check[size];

    for (int i = 0; i < size; i++) // copy array
        check[i] = arr[i];

    bubblesort(arr, size);

    for (int i = 0; i < size; i++) // check count
    {
        if (check[i] != arr[i])
            counter++;
    }

    cout<<endl;


    if (counter <= 5)
        cout<<"The given array is almost sorted as it has only "<<counter<<" unsorted element";
    else
        cout<<"The given array is not almost sorted as it has "<<counter<<" unsorted element";
}

int main()
{

    int arr[] = {1, 3, 5, 2, 6, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    isAlmostSorted(arr,size);


    
}