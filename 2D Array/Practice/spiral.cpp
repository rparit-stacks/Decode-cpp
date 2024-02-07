#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter a the dimension of squar matrix : ";
    cin >> n;
    int arr[n][n];
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << "Enter the dimension "<<"["<<i<<","<<j<<"]"<<" ";
            cin >> arr[i][j];
        }
    }

    cout << endl;

    int minr = 0, maxr = n - 1, minc = 0, maxc = n - 1;

    while (minr <= maxr && minc <= maxc)
    {
        for (int i = minc; i <= maxc; i++)
        {
            res.push_back(arr[minr][i]);
        }
        minr++;
        for (int j = minr; j <= maxr; j++)
        {
            res.push_back(arr[j][maxc]);
        }
        maxc--;

        if (minr <= maxr)
        {
            for (int i = maxc; i >= minc; i--)
            {
                res.push_back(arr[maxr][i]);
            }
            maxr--;
        }

        if (minc <= maxc)
        {
            for (int j = maxr; j >= minr; j--)
            {
                res.push_back(arr[j][minc]);
            }
            minc++;
        }
    }

    for (int i = 0; i < n * n; i++)
    {
        cout << res[i] << " ";
    }
}