#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int minMaxGame(vector<int>& nums)
{
    if(nums.size() == 1) return nums[0];
    int count = 1;
    vector<int> res;
    for(int i = 0; i<nums.size(); i+=2)
    {
        
        if(count%2 != 0)
        {
            int mi = min(nums[i], nums[i+1]);
            res.push_back(mi);
            
        }
        else{
            int mx = max(nums[i], nums[i+1]);
            res.push_back(mx);
        }
        count++;
    }
    return minMaxGame(res);
}
int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8};
    
    cout<<minMaxGame(nums);
    



return 0;
}