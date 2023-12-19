#include <iostream>
#include <vector>

using namespace std;
void display(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {9, 2, 3, 4, 1, 6, 5, 8, 7};

    int size = sizeof(arr) / sizeof(arr[0]);
    
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
}