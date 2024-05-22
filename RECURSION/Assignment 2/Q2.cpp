#include <iostream>
#include <vector>

using namespace std;

int call_element(vector<int> &nums, int size, int x)
{
    if (nums[size] == x)
        return size;
    if (size < 0)
        return -1;
    call_element(nums, size - 1, x);
}

int main()
{
    vector<int> nums = {2, 4, 6, 8, 1, 0, 5, 6};
    cout << call_element(nums, nums.size() - 1, 7);
}