#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&vec)
{
    
     for(int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i];
        }
}

void rev_vector(vector<int> &vec)
{
    int m = vec.size()-1;
    for(int n = 0; n<=(vec.size()/2)-1; n++)
    {
        int temp = vec[n];
        vec[n]=vec[m];
        vec[m]=temp;
        m--;
    }
}

void rev_part(vector<int> &vec, int a, int b)
{
     int m = b;
    for(int n = a; n<=m; n++)
    {
        int temp = vec[n];
        vec[n]=vec[m];
        vec[m]=temp;
        m--;
    }
}

int main() 
{
        int size;
        cout<<"Enter total element of vector : ";
        cin>>size;
        vector<int>vec;

        for(int i = 0; i < size; i++)
        {
            int val;
            cout<<"Enter the element of index "<<i<<" : ";
            cin>>val;
            vec.push_back(val);
        }
        

        



}
    