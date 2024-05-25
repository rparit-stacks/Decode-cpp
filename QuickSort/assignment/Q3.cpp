#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int idx1 = -1;
    int idx2 = -1;
    vector<int> nums = {5,10,15,25,20};
    for(int i = 0; i<nums.size()-1; i++)
    {
        if(nums[i] > nums[i+1]){
            if(idx1 == -1) 
            {
                idx1 = i;
                idx2 = i+1;
            }
            else idx2 = i+1;
        } 
    }
    swap(nums[idx1],nums[idx2]);

    for(int ele : nums) cout<<ele<<" ";
}