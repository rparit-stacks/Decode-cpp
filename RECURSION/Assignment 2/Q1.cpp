#include <iostream>
#include <vector>

using namespace std;

void reverse_array(vector<int> &nums, int size)
{
    if (size < 0)
        return;
    cout << nums[size] << " ";
    reverse_array(nums, size - 1);
}

int main()
{
    vector<int> nums = {2, 4, 6, 8, 1, 0, 5, 6, 7};
    reverse_array(nums, nums.size() - 1);
}