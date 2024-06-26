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
    vector<int> nums = {1, 5, 7, 3, 5, 5};

    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }
    int idx = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (2 * nums[i] == nums[nums.size() - 1]) // 2 baari agar index tak k sum ko add kre to vo equal hona chiye total array k sum k toh uss index k alage value se he partition hota hai
        {
            idx = i;
            break;
        }
    }

    cout << idx;
    return 0;
}