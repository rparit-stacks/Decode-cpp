#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // o(n*k)
    {
        //     vector<int> nums = {7, 1, 2, 5, 8, 4, 9, 3, 6};

        //     int k = 3;
        //     int maxi = INT_MIN;
        //     int maxIdx = -1;

        //     for (int i = 0; i <= nums.size() - 3; i++)
        //     {
        //         int sum = 0;
        //         for (int j = i; j < i + k; j++)
        //         {
        //             sum += nums[j];
        //         }
        //         if (sum > maxi)
        //         {
        //             maxi = sum;
        //             maxIdx = i;
        //         }
        //     }
        //     cout << maxi << endl;

        //     for (int i = maxIdx; i <= maxIdx + 2; i++)
        //     {
        //         cout << nums[i] << " ";
        //     }

        //     return 0;
    }

    // O(n)
    vector<int> nums = {7, 5, 8, 4, 2, 9, 6, 8, 3, 5};

    int k = 3;
    int maxi = INT_MIN;
    int maxIdx = -1, prevSum = 10, i = 1, j = k;
    while (j < nums.size())
    {
        int currentSum = prevSum + nums[j++] - nums[i++ - 1];
        if (currentSum > maxi)
        {
            maxi = currentSum;
            maxIdx = i;
        }

        prevSum = currentSum;
    }
    cout << maxi << " " << maxIdx - 1;
}