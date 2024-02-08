#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
void display(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> nums = {0, 1, 2, 1, 0, 2};

    for (int i = 0; i < nums.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                flag = true;
            }
        }
    }

    for (int ele : nums)
    {
        cout << ele;
        cout << " ";
    }
}