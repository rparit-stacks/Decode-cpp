#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    vector<int> nums = {9, 2, 3, 4, 1, 6, 5, 8, 7};

   for(int i = 1; i< nums.size(); i++)
        for(int j = i; j>0 && nums[j] < nums[j-1]; j--)
            swap(nums[j], nums[j-1]);

    for(int ele : nums) cout<< ele <<" ";
}