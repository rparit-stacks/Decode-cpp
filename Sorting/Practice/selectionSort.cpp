#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    vector<int> nums = {2,1,5,4,3};
    int size = nums.size();

   int i = 0;
   while(i<size)
    {
        int min = INT_MAX;
        int idx = -1;
        //min element in array 
        for(int j = i; j<size; j++)
            if(nums[j] < min)
            { 
                min = nums[j];
                idx = j;
            }
        swap(nums[i], nums[idx]);
        i++; 
    }
    for(int ele : nums) cout<< ele <<" ";
}
  