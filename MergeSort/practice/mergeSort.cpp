#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& nums){
    int i = 0, j = 0,  k = 0;
    while(i<a.size() && j <b.size()){
        if(a[i] > b[j]) nums[k++] = b[j++];
        else nums[k++] = a[i++];
    }

    while(j < b.size())
        nums[k++] = b[j++];
    while(i < a.size())
        nums[k++] = a[i++];
}

void mergeSort(vector<int>& nums){
    int size = nums.size();
    if(size == 1) return;
    vector<int> a(size/2);
    vector<int> b(size - size/2);

    //filling both the vector
     for (int i = 0, j = 0; i < nums.size(); i++){
        if (i < size/2)
            a[i] = nums[i];
        else
            b[j++] = nums[i];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,nums);
}

int main(){
    int n;
    cout<<"Enter The Number of Element in the vector : ";
    cin>> n;
    vector<int> nums(n);
    //Input for the vector
    for(int n = 0; n<nums.size(); n++) cin>>nums[n];

    mergeSort(nums);
    for(int ele : nums) cout<<ele<<" ";
}