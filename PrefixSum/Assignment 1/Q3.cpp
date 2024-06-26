class Solution
{
public:
    vector<long long> findPrefixScore(vector<int> &nums)
    {
        vector<long long> nums2(nums.size());
        nums2[0] = 2 * nums[0];
        long long temp = nums[0];

        for (int i = 1; i < nums2.size(); i++)
        {
            if ((long long)nums[i] > temp)
                temp = (long long)nums[i];
            nums2[i] = temp + (long long)nums[i] + nums2[i - 1];
        }

        return nums2;
    }
};