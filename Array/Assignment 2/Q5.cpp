//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.


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
    display(vec);
    for(int i = 0; i < vec.size(); i++)
    {
        if(i%2 == 0)
        {
            vec[i] = vec[i] + 10;
        }
        else{
            vec[i] = vec[i] * 2;
        }
    }
    cout<<"\n";
    display(vec);
}
 