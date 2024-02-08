#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    int n = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            
        }
    }
}