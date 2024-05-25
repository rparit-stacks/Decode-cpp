#include<iostream>
#include<vector>
using namespace std;

// void mySort(vector<int>& nums)
// {
//       for(int k = 0; k<nums.size();k++)
//     {
//         int i = 0;
//         for(int j = i+1; j<nums.size() - 1;){
//             if(nums[i]>nums[j]) swap(nums[i], nums[j]);
//             i++;
//             j++;
//         }
//     }
// }


int main()
{
    vector<int> nums = {2,1,5,4,3};
    int size = nums.size();
  

    for(int i =0; i<size; i++)
    {
        bool flag = false;
        for(int j = 0; j<size-1-i; j++){
            if(nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
    for(int ele : nums) cout<< ele <<" ";
}