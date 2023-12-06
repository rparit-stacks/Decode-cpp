#include<vector>
#include<iostream>
using namespace std;

void display(vector<int> &vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]<< " ";
    }
}

void sort(vector<int> &vec)
{
    for(int i = 0 ; i < vec.size(); i++)
    {
        for(int j = i+1; j < vec.size(); j++)
        {
            if (vec[j] < vec[i])
            {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}
    

    

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int> result;
    for(int i = 0; i < m; i++)
    {
        if (nums1[i] != 0) {
        result.push_back(nums1[i]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        if (nums2[i] != 0) {
        result.push_back(nums2[i]);
        }
    }
    sort(result);
    display(result);
    

}

int main()
{
    int m,n;
    cout<<"Enter M and N : "<<endl;
    cin>>m>>n;

    vector<int> nums1;
    for(int i = 0; i<m; i++)
    {
        int a;
        cout<<"Enter element : ";
        cin>>a;
        nums1.push_back(a);
    }

    vector<int> nums2;
    for(int i = 0; i<n; i++)
    {
        int a;
        cout<<"Enter element : ";
        cin>>a;
        nums2.push_back(a);
    }
    
    merge(nums1, m, nums2, n);
    
}