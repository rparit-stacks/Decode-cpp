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
    vector<int>vec;
    
     for(int i=0;i<=5;i++) 
    {
        int m;
        cout<<"Enter element : ";
        cin>>m;
        vec.push_back(m);
    }
    display(vec);

    for(int i=0, j = vec.size()-1; i<j; i++,j--)
    {
        if(vec[i]<0) i++;
        if(vec[j]>0) j--;
        if(i>j) break;
        if(vec[i]>0 && vec[j]<0) 
        {
            int temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        }

    }

    cout<<endl;
    display(vec);
   
}