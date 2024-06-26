#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{

    // prefix calculation
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }
    int LeftSum;
    int RightSum;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
            LeftSum = 0;
        else
            LeftSum = nums[i - 1];

        RightSum = nums[nums.size() - 1] - nums[i];

        if (RightSum == LeftSum)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 6};
    cout << pivotIndex(nums);

    return 0;
}