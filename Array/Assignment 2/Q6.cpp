//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
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

int check_repeat(vector<int>&vec)
{
    for(int i = 0; i<vec.size(); i++)
    {
        for(int j = i+1; j<vec.size(); j++)
        {
            if (vec[i] != vec[j]) return vec[j];
        
        }
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
    int unique = check_repeat(vec);
    cout<<unique;
}