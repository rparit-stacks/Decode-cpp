#include <iostream>
#include <vector>
using namespace std;

void sum_triangle(vector<int> nums, int n)
{
    if (n == 0)
        return;
    vector<int> temp(n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
        if (i < n - 1)
            temp[i] = nums[i] + nums[i + 1];
    }
    cout << endl;
    sum_triangle(temp, temp.size());
}
int main()
{
    vector<int> nums = {1,2,3,4,5,};
    sum_triangle(nums, nums.size());
}