#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size();i+=3)
            if(nums[i] != nums[i+1] || i==nums.size()-1) return nums[i];

        return nums[nums.size()-1];
        
    }
int main()
{

    vector<int> nums = {2,2,3,2};
    cout<<singleNumber(nums);

return 0;
}