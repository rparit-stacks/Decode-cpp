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
    vector<int> nums = {1, 4, 5, 3, 2, 7, 6};
    vector<int> nums2(7, nums[0]);
    for (int i = 1; i < nums2.size(); i++)
    {
        nums2[i] = nums2[i - 1] + nums[i];
    }

    for (int ele : nums2)
        cout << ele << " ";

    return 0;
}