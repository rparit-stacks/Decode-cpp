#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 9};
    vector<int> vec;
    int target = 5;
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    bool flag = false;
    int low1 = 0;
    int high1 = nums.size() - 1;
    int mid1 = low1 + (high1 - low1) / 2;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        mid1 = low1 + (high1 - low1) / 2;
        if (nums[mid] == target)
        {
            if (nums[mid - 1] == target)
                high = mid - 1;
            else
            {
                vec.push_back(mid);
            }

            if (nums[mid1 + 1] == target)
                low1 = mid1 + 1;
            else
            {
                vec.push_back(mid1);
        
            }
        }

        else if (nums[mid] > target)
        {
            high = mid - 1;
            high1 = mid1 - 1;
        }

        else if (nums[mid] < target)
        {
            low = mid + 1;
            low1 = mid1 + 1;
        }
    }

    for (int ele : vec)
        cout << ele << " ";
}