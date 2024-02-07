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

    // wave 1
    for (int i = 0; i < n; i++)
    {
        int m = n;
        for (int j = 0; j < n, j < m;)
        {
            if (i % 2 == 0)
            {
                cout << a[i][j]<<" ";
                j++;
            }
            else
            {
                cout << a[i][m-1]<<" ";
                m--;
            }
        }
        cout << endl;
    }

    cout << endl;

    // wave 2
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++) // even
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int k = n - 1; k >= 0; k--)
            {
                cout << a[i][k] << " ";
            }
        }

        cout << endl;
    }

    cout << endl;

    //wave 3

    for (int i = 0; i < n; i++)
    {
        int m = n;
        for (int j = 0; j < n, j < m;)
        {
            if (i % 2 == 0)
            {
                cout << a[j][i] << " ";
                j++;
            }
            else
            {
                cout << a[m-1][i] << " ";
                m--;
            }
        }
        cout << endl;
    }
}