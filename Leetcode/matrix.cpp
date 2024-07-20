#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n = 4;
    int m = 3;
    int arr[m][n] = {{1, 10, 4, 2}, {9, 3, 8, 7}, {15, 16, 17, 12}};
    vector<int> res;
    for (int i = 0; i < m; i++)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        int idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                idx = j;
            }
        }
        if (idx == -1)
        {
            continue; // No valid column index found
        }
        for (int k = 0; k < m; k++)
        {
            if (arr[k][idx] > max)
            {
                max = arr[k][idx];
            }
        }

        if (max == min)
        {
            cout << min << " ";
            res.push_back(min);
        }

        for (int ele : res)
            cout << ele << " ";
    }
    return 0;
}