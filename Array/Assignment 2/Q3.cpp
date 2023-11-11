//Check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int>&vec, int a, int b)
{
    int temp = vec[a];
    vec[a] = vec[b];
    vec[b] = temp;
}
int sort(vector<int>&vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = i+1; j < vec.size(); j++)
        {
            if(vec[i]>vec[j]) swap(vec,i,j);
        }
    }

    
}

bool is_sorted(vector<int> &vec)
{
      for(int i = 0; i < vec.size(); i++)
    {
        for(int j = i+1; j < vec.size(); j++)
        {
            if(vec[i]>vec[j]) return false;
        }
        return true;
    }

}
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

    

    bool check = is_sorted(vec);
    if(check == true) 
    {
        cout<<"The given vector is sorted"<<endl;
        display(vec);
    }

    else  
    {
        cout<< "The given vector is not sorted"<<endl;
        sort(vec);
        cout<< "The sorted vector is : "<<endl;
        display(vec);
    }

}