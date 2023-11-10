#include<iostream>
#include<vector>

using namespace std;

int main()
{
    
        int n = 6;
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
    
    
    
        vector<int>vec2;

        for(int i = size-1 ; i >= 0; i--)
        {
            vec2.push_back(vec[i]);
        }

        for(int i = 0 ; i < size; i++)
        {
            cout<<vec[i]<<" ";
            
        }
        cout<<endl;
        for(int i = 0 ; i < size; i++)
        {
            
            cout<<vec2[i]<<" ";
        }


    
}