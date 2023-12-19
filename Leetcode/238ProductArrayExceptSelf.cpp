#include<iostream>
#include<vector>

using namespace std;
void display(vector<int>& nums)
{

     for(int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
}

int main()

{

    vector<int> nums = {1,2,3,4};

    int n = nums.size();

    vector<int> num1(n);
    

    for(int i = 0; i<n; i++)
    {
        int flag = 1;
        for(int j = 0; j<n; j++)
        {
             if(i == j) continue;
               flag *= nums[j];
        }
        num1[i]=flag;
    }

    display(num1);
}