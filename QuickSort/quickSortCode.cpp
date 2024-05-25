#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int partition(vector<int>& nums, int startingIdx, int endingIdx)
{
    int pvtEle = nums[startingIdx];
    int count = 0;
    for(int i = startingIdx + 1; i<=endingIdx; i++)
        if(nums[i] <= pvtEle) count++;
    
    int pvtIdx = count+startingIdx;

    swap(nums[startingIdx],nums[pvtIdx]);
    int i = startingIdx;
    int j = endingIdx;

    while(i < pvtIdx && j > pvtIdx)
    {
        if(nums[i] <= pvtEle) i++;
        if(nums[j] > pvtEle) j--;
        else 
            swap(nums[i++], nums[j--]);
    }

    return pvtIdx;
}

void quickSort(vector<int>& nums, int startingIdx, int endingIdx)
{
    if(startingIdx >= endingIdx) return; // Base case corrected
    int pivotIdx = partition(nums, startingIdx, endingIdx);

    quickSort(nums, startingIdx, pivotIdx - 1);
    quickSort(nums, pivotIdx + 1, endingIdx);
}



int main(){

    vector<int> nums = {1,1,1,1,1,5,5,5,5,5,2,2,2,2,2};
    for(int ele : nums) cout<<ele<<" ";

    quickSort(nums,0,nums.size()-1);
    cout<<endl;
    for(int ele : nums) cout<<ele<<" ";
}