// Q5: Write a program to print the row number having the maximum sum in a given matrix.
#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int a[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 4, 5, 6, 3, 2, 1, 2, 5, 8, 6, 5, 4, 9};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 2)
            {
                cout << a[i][j]<<" ";
            }
            else if (j == 2)
            {
                cout << a[i][j]<<" ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}