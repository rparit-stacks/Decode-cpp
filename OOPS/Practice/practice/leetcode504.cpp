#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


int singleNonDuplicate(vector<int>& nums) {

        for(int i = 1 ; i < nums.size(); i+=2) 
        {
            if(nums[i]!=nums[i-1])
            {
                return nums[i-1];
                break;
            }
            else 
                continue;;
        }
        
    }


int main()
{
   vector<int> vec = {1,1,2,3,3,4,4,8,8};
    cout<<singleNonDuplicate(vec);

    return 0;
}
