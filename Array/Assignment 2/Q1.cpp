//Count the number of elements strictly greater than x.

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

    int x = 5;

    vector<int> vec;
    for(int i=0;i<=10;i++) 
    {
        vec.push_back(i);
        if(vec[i]>x) cout<<vec[i]<<" ";
        else continue;
    }

    


    
}