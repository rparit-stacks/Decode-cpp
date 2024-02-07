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

    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //Printing Transpose
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //anticlock wise rotate
    for (int j = 0; j < n; j++)
    {
        int k = n - 1;
        int i = 0;
        while (i < k)
        {
            swap(arr[i][j], arr[k][j]);
            i++;
            k--;
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}