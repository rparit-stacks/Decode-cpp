#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> nums = {2,3,4,5,6,7};
    int x = 9;
    int n = nums.size();
    for(int i = 0; i<n-1 ; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(nums[i] + nums[j] == x)
            {
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }

    
}