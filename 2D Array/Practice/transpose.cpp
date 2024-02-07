#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3];
    int n = sizeof(a) / sizeof(a[0]);

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }


    //90 rotate
    for (int i = 0; i < 3; i++)
    {
        int k = 0;
        int j = n - 1;

        while (k < j)
        {
            int temp = a[i][k];
            a[i][k] = a[i][j];
            a[i][j] = temp;
            k++;
            j--;
        }
    }

    // display
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}