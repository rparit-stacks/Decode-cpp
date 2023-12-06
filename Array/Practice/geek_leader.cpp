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

void leader(vector<int> &vec, int x, int y)
{
    vector<int>leaders;
    int leader = vec[x];
    for(int i = x+1; i < vec.size(); i++)
    {
      if(leader<vec[i]) leader = vec[i];
    }
    cout<<leader<<endl;
}

int main()
{
    int m;
    cout<<"Enter M and N : "<<endl;
    cin>>m;

    vector<int> nums1;
    for(int i = 0; i<m; i++)
    {
        int a;
        cout<<"Enter element : ";
        cin>>a;
        nums1.push_back(a);
    }

    for(int i = 0; i< nums1.size();i++)
    {

    }


    
    leader(nums1,0,nums1.size()-1);
}