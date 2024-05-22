#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 1, sum;
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        sum = a + b;
        arr[i] = a;
        a = b;
        b = sum;
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }
}