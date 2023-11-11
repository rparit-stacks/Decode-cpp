#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}

int main()
{
    vector<int> vec;
     for(int i=0;i<=5;i++) 
    {
        int m;
        cout<<"Enter element : ";
        cin>>m;
        vec.push_back(m);
    }
    
    for(int i = 0,j = vec.size()-1; i<vec.size(),j>=0; i++,j--)
    {
        if(vec[i]!=vec[j])
        {
            cout<<"no the given vector is not palindrom";
            break;
        }
        else 
        {
            cout<<"yes the given vector is palindrom";
            break;
        }
    }
}