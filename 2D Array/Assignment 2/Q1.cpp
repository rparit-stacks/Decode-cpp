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
    int m = n + 1;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i+j == n-1)
                cout << a[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}