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

    int zero = 0;
    int one = 0;
    for(int i = 0; i < vec.size(); i++) 
    {
        if(vec[i] == 0) zero++;
        else one++;
    }

    for(int i = 0; i < vec.size(); i++)  
    {
        if(i<zero) vec[i] = 0;
        else vec[i] = 1;
    }
    cout<<endl;
    display(vec);
   
}
