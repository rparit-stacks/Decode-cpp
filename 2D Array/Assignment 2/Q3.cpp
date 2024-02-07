#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the dimension of the squre matrix: ";
    cin >> n;

    // 2D array to store the square matrix.
    int arr[n][n];

    // Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        
        int k = n - 1;
        int j = 0;
        while (j < n && k >= 0)
        {
            if (i % 2 == 0)
            {
                cout << arr[k][i] << " ";
                k--;
            }
            else
            {
                cout << arr[j][i] << " ";
                j++;
            }
        }
    }
}
