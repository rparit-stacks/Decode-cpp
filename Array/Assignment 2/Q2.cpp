//WAP to find the largest three elements in the array.  

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
void swap(vector<int>&vec, int a, int b)
{
    int temp = vec[a];
    vec[a] = vec[b];
    vec[b] = temp;
}
int main()
{

    int x = 5;

    vector<int> vec;
     for(int i=0;i<=10;i++) 
    {
        vec.push_back(i);
    
    }
   
    

    for(int i = 0; i < vec.size();i++)
    {
        for(int j = i+1; j < vec.size(); j++)
        {
            if(vec[i] < vec[j])
            swap(vec, j , i);
            
        }
        
    }
   

    cout<<"the largest three numbers are : "<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
}
    
    
    
