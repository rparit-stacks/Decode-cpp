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

    
    int sum=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "\nSum of all elements is: "<<sum;
}