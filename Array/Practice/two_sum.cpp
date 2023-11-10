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


    for(int i = 0; i <= size-1; i++)
    {
        for(int j = i+1; j <= size-1; j++)
        {
            if (vec[i] + vec[j] == n)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }


    
}