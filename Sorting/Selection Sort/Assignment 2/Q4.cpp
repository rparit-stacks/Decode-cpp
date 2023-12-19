
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

    /* The code snippet you provided is converting the sorted array `arr` into a single integer `num1`. */
    int num1 = 0;
    for (int i = 0; i < size; i++)
    {
        num1 *= 10;
        num1 += arr[i];
    }

    /* The code snippet you provided is swapping the last two elements of the sorted array `arr` if
    they are not equal. */
    for (int i = size - 1; i > 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }

    /* The code snippet you provided is converting the sorted array `arr` into a single integer `num2`
    using a base 10 conversion. */
    int num2 = 0;
    for (int i = 0; i < size; i++)
    {
        num2 *= 10;
        num2 += arr[i];
    }
    cout << num1 + num2 << endl;
}