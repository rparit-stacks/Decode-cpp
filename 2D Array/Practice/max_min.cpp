#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int m = 3;
    int n = 3;
    int arr[m][n];

    // input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the value of place "
                 << "[" << i << "," << j << "]"
                 << " : ";
            cin >> arr[i][j];
        }
    }

    // max
    int max = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    cout << "The  maximum element is: " << max << endl;

    // min
    int min = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    cout << "The  minimum element is: " << min << endl;

    // 2nd max
    int smax = INT_MIN;
    int sec_max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > smax)
            {
                smax = arr[i][j];
                sec_max = smax;
            }
        }
    }

    cout << "The  maximum element is: " << sec_max << endl;
}