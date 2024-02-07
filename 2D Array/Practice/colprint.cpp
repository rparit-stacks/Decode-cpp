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

    // col wise print
    for (int i = 0; i < n; i++)
    {
      
        for (int j = 0; j < n;j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}