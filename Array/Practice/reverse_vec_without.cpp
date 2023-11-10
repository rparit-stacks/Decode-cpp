#include<iostream>
#include<vector>

using namespace std;
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

        int i=0, j=size-1;
    

        for(int i = 0; i <= (size/2)-1; i++)
        {
            int  temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            j--;
        }

         for(int i = 0; i < size; i++)
        {
            cout<<vec[i];
        }
        

}
