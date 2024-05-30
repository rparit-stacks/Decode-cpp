#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums, vector<int>& num) {
        int flag = 0;
        if(nums[0] != nums[1]){
            num.push_back(nums[0]);
            flag++;

        }

        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size();i+=2)
        {
            if(flag !=0) i++;
            else if(i == 0)
            {
                if(nums[i] == nums[i+1])
                i+=2;
            }
            else if(i==nums.size()-1)
            {

            }
        
        }
           
        return nums[nums.size()-1];
        
    }
int main()
{

    vector<int> nums = {1,2,1,3,2};
    vector<int> num;
    cout<<singleNumber(nums,num);

return 0;
}