#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n = 2, m = 3;
    int a[n][m] = {{1, 2, 3}, {4, 5, 6}};
    int b[m][n] = {{9, 8}, {7, 6}, {5, 4}};

    int res[n][n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl; 
    }
}