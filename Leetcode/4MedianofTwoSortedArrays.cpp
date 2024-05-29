#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


void mergeSorted(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)
{
    int i = 0; 
    int j = 0;
    int k = 0;

    while(i<nums1.size() && j<nums2.size())
    {
        if(nums1[i] <= nums2[j])
            nums3[k++] = nums1[i++];
        else if (nums1[i] > nums2[j])
            nums3[k++] = nums2[j++];
    }

    while(i<nums1.size())
    {
        nums3[k++] = nums1[i++];
    }
    while(j<nums2.size())
    {
        nums3[k++] = nums2[j++];
    }

}
int main()
{
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    vector<int> nums3(nums1.size() + nums2.size());

    mergeSorted(nums1,nums2,nums3);

    for(int ele : nums3) cout<<ele<<" ";

    
    cout<<endl;
    if(nums3.size()%2 != 0)
    {
        double res = 0;
        res = nums3.size()/2.0;
        cout<<nums3[res];
    }

    if(nums3.size()%2 == 0)
    {
        double res1 = (nums3.size()/2);
        double res2 = (nums3.size()/2 - 1);

        cout<< ((nums3[res1] + nums3[res2])/2.0);
    }


    return 0;
}