#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag = 0; 
        for(int i = 0; i<nums.size(); i++){
          if(nums[i] != flag) break;
            flag++;


     }
        return flag;
        
    }
};
int main()
{
return 0;
}