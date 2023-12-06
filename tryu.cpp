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
    int p=0,q=0,r=0;
    
    vector<int> result(m+n);
    for(i)
    {
        if(nums1[p]<=nums2[q])
        {
            result[r] = nums1[p];
            p++;
            r++;
        }
        else
        {
            result[r] = nums2[q];
            q++;
            r++;
        }
    }
    display(result);
    
}