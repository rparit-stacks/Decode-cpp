// Write a C++ program to find the largest element of a given 2D array of integers.

#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter a the dimension of squar matrix : ";
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << "Enter the dimension "<<"["<<i<<","<<j<<"]"<<" ";
            cin >> a[i][j];
        }
    }
    cout << endl;

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    cout << max;
}