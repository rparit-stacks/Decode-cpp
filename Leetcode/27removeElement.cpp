#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    vector<int> nums = {2, 3, 2, 3};
    int n = nums.size();
    int val = 2;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0;)
        {
            if (nums[i] == val)
            {
                swap(nums[i], nums[j]);
            }
            j--;
            i++;
        }
    }
    cout << count;

    for (int ele : nums)
        cout << ele << " ";
}